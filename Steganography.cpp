#include "Steganography.h"

bool Steganography::Coding( const std::string * nameMain, const std::string*nameHide)
{
	cout << "coding" << endl;
	cout << *nameMain << endl;
	cout << *nameHide << endl;

	
	cv::String SnameMain(*nameMain);
	cv::String SnameHide(*nameHide);

	cout << "coding." << endl;
	imageMain = cv::imread(cv::samples::findFile(SnameMain), cv::IMREAD_COLOR);
	imageHide = cv::imread(cv::samples::findFile(SnameHide), cv::IMREAD_COLOR);
	cout << nameMain << " " << nameHide << endl;

	cout << "coding.." << endl;

	//some exception
	if (!CheckIfEmpty(imageMain, imageHide))
		return 0;

	cout << "coding..." << endl;
	float scale = 1.0;
	cout << "ImageMain width: " << imageMain.cols << " "  << "ImageMain height: " << imageMain.rows << endl;
	cout << "imageHide width: " << imageHide.cols << " "  << "imageHide height: " << imageHide.rows << endl;
	
	if (!CompareSize(imageMain, imageHide))
		return 0;

	cv::Mat* temp = new cv::Mat(imageMain);
	
	SaveFile(imageMain);
	return 1;

}
bool Steganography::ResCoding(const std::string& nameMain, const std::string& nameHide)
{
	//Coding(nameMain  , nameHide);
	cout << "rescoding" << endl;
	return 1;
}
bool Steganography::Decoding(const std::string& nameDecoding)
{
	cout << "decoding" << endl;
	return 1;

}
bool Steganography::CheckIfEmpty(const cv::Mat& main, const cv::Mat& hide)
{
	if (main.empty())                      // Check for invalid input
	{
		cout << "Could not open or find the image" << std::endl;
		return 0;
	}
	if (hide.empty())                      // Check for invalid input
	{
		cout << "Could not open or find the image" << std::endl;
		return 0;
	}
	return 1;
}
bool Steganography::CompareSize(const cv::Mat & main, const cv::Mat& hide)
{
	if (main.rows < hide.rows || main.cols < main.cols)
	{
		cout << "Unable to create by size or throw exception" << endl;
		return 0;
	}
	else {
		return 1;
	}
}
void Steganography::SaveFile(const cv::Mat& image)
{
	cv::imwrite("output.jpg", image);
}