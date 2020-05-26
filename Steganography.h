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
	Steganography(){
		bit = 4;
		format = 0;
	}
	~Steganography() = default;
	//b - steganography last significants bits, f - output format
	bool Coding(const std::string* nameMain, const std::string* nameHide, int b, int f);
	//b - steganography last significants bits, f - output format
	bool Decoding(const std::string * nameDecoding, int b, int f);
	bool CompareSizeOut(const std::string* nameMain, const std::string* nameHide);
	int GetImageRows(const std::string* image);
	int GetImageCols(const std::string* image);

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
	void MixChanels(cv::Mat& temp, const cv::Mat& main, const cv::Mat& hide);
	int cutRGB( int value1);
	int cutRGB( int value1, int value2);
	void ReadChanels(cv::Mat& temp, const cv::Mat& decoding);

	void SaveFile(const cv::Mat& image);
	void SaveFileDecoding(const cv::Mat& image);

	int bit;
	int format;
};