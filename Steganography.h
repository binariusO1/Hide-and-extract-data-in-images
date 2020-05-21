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
	Steganography() {}
	~Steganography() = default;
	void Coding(const std::string& nameMain, const std::string& NameHide);
	void Decoding(const std::string& NameDecoding);

	//void ste
private:
	std::string imageNameMain;
	std::string imageNameHide;
	std::string imageNameDecoding;

};

