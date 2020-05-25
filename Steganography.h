#pragma once

#include <iostream>
#include <string>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <fstream>							//to save file

using namespace std;
//using namespace cv;

class Steganography
{
public:
	Steganography()
	{
		bit = 4;
	}
	~Steganography() = default;
	bool Coding(const std::string* nameMain, const std::string* nameHide, int b, int f, bool res);
	bool CompareSizeOut(const std::string* nameMain, const std::string* nameHide);
	int GetImageRows(const std::string* image);
	int GetImageCols(const std::string* image);
	bool Decoding(const std::string& nameDecoding);

	//void ste
private:
	std::string imageNameMain;
	std::string imageNameHide;
	std::string imageNameDecoding;

	cv::Mat imageMain;
	cv::Mat imageHide;
	cv::Mat imageDecoding;

	bool CheckIfEmpty(const cv::Mat& image);
	bool CheckIfEmpty(const cv::Mat& main, const cv::Mat& hide);
	bool CompareSize(const cv::Mat& main, const cv::Mat& hide);
	void Mixchanels(cv::Mat& temp, const cv::Mat& main, const cv::Mat& hide);
	int cutRGB(const int value1, const int value2);
	void SaveFile(const cv::Mat& image);

	int bit;
	int format;
};