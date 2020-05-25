#include "Steganography.h"

bool Steganography::Coding( const std::string * nameMain, const std::string*nameHide, int b=4, int f=0,bool res=0)
{
	this->bit = b;
	this->format = f;
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
	cout << "ImageMain width: " << imageMain.cols << " "  << "ImageMain height: " << imageMain.rows << endl;
	cout << "imageHide width: " << imageHide.cols << " "  << "imageHide height: " << imageHide.rows << endl;
	
	if (!CompareSize(imageMain, imageHide))
		return 0;

	cv::Mat* temp = new cv::Mat(imageMain);
	//cv::Mat temp(imageMain);
	if(res == 0){


	}
	else
	{}
	/*
	cv::Vec3b& colorMain = imageMain.at<cv::Vec3b>(0, 0);
	cv::Vec3b& colorHide = imageHide.at<cv::Vec3b>(0, 0);
	cout << static_cast<int>( colorMain[0])<< " " << static_cast<int>(colorMain[1]) << " " << static_cast<int>(colorMain[2]) << endl;
	cout << static_cast<int>( colorHide[0] )<< " " << static_cast<int>(colorHide[1]) << " " << static_cast<int>(colorHide[2]) << endl;
	*/
	/*
	cout << cutRGB(static_cast<int>(colorMain[0])) << " "
		<< cutRGB(static_cast<int>(colorMain[1])) << " "
		<< cutRGB(static_cast<int>(colorMain[2])) << endl;
	cout << cutRGB(static_cast<int>(colorHide[0])) << " "
		<< cutRGB(static_cast<int>(colorHide[1])) << " "
		<< cutRGB(static_cast<int>(colorHide[2])) << endl;
		*/
	//cout << cutRGB(static_cast<int>(colorMain[0]), static_cast<int>(colorHide[0])) << endl;
	
	Mixchanels(*temp,imageMain, imageHide);
	SaveFile(imageMain);
	return 1;

}
bool Steganography::Decoding(const std::string& nameDecoding)
{
	cout << "decoding" << endl;
	return 1;

}
bool Steganography::CheckIfEmpty(const cv::Mat& image)
{
	if (image.empty())                      // Check for invalid input
	{
		cout << "Could not open or find the image" << std::endl;
		return 0;
	}
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
bool Steganography::CompareSizeOut(const std::string* nameMain, const std::string* nameHide)
{
	cv::String SnameMain(*nameMain);
	cv::String SnameHide(*nameHide);
	imageMain = cv::imread(cv::samples::findFile(SnameMain), cv::IMREAD_COLOR);
	imageHide = cv::imread(cv::samples::findFile(SnameHide), cv::IMREAD_COLOR);
	if (!CompareSize(imageMain, imageHide))
		return 0;
	return 1;
}
void Steganography::Mixchanels(cv::Mat& temp, const cv::Mat& main, const cv::Mat& hide)
{
	int temp_rows = hide.rows;
	int temp_cols = hide.cols;

	//first bits of blue give us an information about last significations bits
	//(important to decoding)
	cv::Vec3b& color = temp.at<cv::Vec3b>(0, 0);
	cv::Vec3b& colorMain = imageMain.at<cv::Vec3b>(0, 0);
	cv::Vec3b& colorHide = imageHide.at<cv::Vec3b>(0, 0);
	color[0] = cutRGB(static_cast<int>(colorMain[0]), this->bit);
	color[1] = cutRGB(static_cast<int>(colorMain[1]), static_cast<int>(colorHide[1]));
	color[2] = cutRGB(static_cast<int>(colorMain[2]), static_cast<int>(colorHide[2]));

	for (int i = 1; i < static_cast<int>(temp_rows); i++)	//y
	{
		for (int j = 1; j < static_cast<int>(temp_cols); j++)	//x
		{
			//fragment code for future
			//IMPORTANT: HEIGHT , WIDTH
			/*
			cv::Scalar color = temp.at<uchar>(i, j);
			uchar blue = static_cast<uchar>(color.val[0]);
			uchar red = static_cast<uchar>(color.val[1]);
			uchar green = static_cast<uchar>(color.val[2]);
			cv::Scalar t = imageMain.at<uchar>(i, j);
						temp.at<uchar>(cv::Point(i, j)) = t;
			*/
			//cout << static_cast<unsigned>(blue) << " " << static_cast<unsigned>(red) << " " << static_cast<unsigned>(green) << endl;
			cv::Vec3b& color = temp.at<cv::Vec3b>(i, j);
			cv::Vec3b& colorMain = imageMain.at<cv::Vec3b>(i, j);
			cv::Vec3b& colorHide = imageHide.at<cv::Vec3b>(i, j);
			color[0] = cutRGB(static_cast<int>(colorMain[0]) , static_cast<int>(colorHide[0]));
			color[1] = cutRGB(static_cast<int>(colorMain[1]), static_cast<int>(colorHide[1]));
			color[2] = cutRGB(static_cast<int>(colorMain[2]), static_cast<int>(colorHide[2]));
			
		}
	}
}
int Steganography::cutRGB(const int value1=0, const int value2 = 0)
{
	int num1[8]{};
	int num2[8]{};

	int t1 = value1;
	int t2 = value2;

	int rval = 0;
	unsigned i = 0,j=1;
	for (i = 0; i < 8; i++)
	{
		num1[i] = t1 % 2;
		t1 = t1 / 2;
	}
	for (i = 0; i < 8; i++)
	{
		num2[i] = t2 % 2;
		t2 = t2 / 2;
	}
	for (i = (8-this->bit); i < 8; i++,j=j*2)
	{
		rval += num2[i] * j;
	}
	for (i = (this->bit); i < 8; i++, j = j * 2)
	{
		rval += num1[i] * j;
	}
	return rval;
}
void Steganography::SaveFile(const cv::Mat& image)
{
	if (format == 1)
		cv::imwrite("output.png", image);
	else if(format == 2)
		cv::imwrite("output.bmp", image);
	else
		cv::imwrite("output.jpg", image);
}
int Steganography::GetImageRows(const std::string* image)
{
	cv::String Sname(*image);
	cv::Mat* temp = new cv::Mat;
	*temp = cv::imread(cv::samples::findFile(Sname), cv::IMREAD_COLOR);
	if (!CheckIfEmpty(*temp))
		return 0;
	return temp->rows;
}
int Steganography::GetImageCols(const std::string* image)
{
	cv::String Sname(*image);
	cv::Mat* temp = new cv::Mat;
	*temp = cv::imread(cv::samples::findFile(Sname), cv::IMREAD_COLOR);
	if (!CheckIfEmpty(*temp))
		return 0;
	return temp->cols;
}