#include<opencv2/opencv.hpp>
#include<iostream>
#include<math.h>

using namespace std;
using namespace cv;
/*
int main() {
	Mat src, dst;
	src = imread("D:/AI/opencv_learning/test.jpg");
	if (!src.data) {
		printf("could not load");
		return -1;
	}
	char input[] = "input";
	char output[] = "output";
	namedWindow(input, CV_WINDOW_AUTOSIZE);
	namedWindow(output, CV_WINDOW_AUTOSIZE);
	imshow(input, src);

	GaussianBlur(src, dst, Size(3, 3), 0, 0);
	Mat gray_src;
	cvtColor(dst, gray_src, CV_BGR2GRAY);

	Mat xgrad, ygrad;
	//Sobel(gray_src, xgrad, CV_16S, 1, 0, 3);
	//Sobel(gray_src, ygrad, CV_16S, 0, 1, 3);

	Scharr(gray_src, xgrad, CV_16S, 1, 0);
	Scharr(gray_src, ygrad, CV_16S, 0, 1);

	convertScaleAbs(xgrad, xgrad);
	convertScaleAbs(ygrad, ygrad);

	Mat xygrad=Mat(xgrad.size(),xgrad.type());
	int width = xgrad.cols;
	int height = xgrad.rows;
	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			int xg = xgrad.at<uchar>(row, col);
			int yg = ygrad.at<uchar>(row, col);
			int xy = xg + yg;
			xygrad.at<uchar>(row, col) = saturate_cast<uchar>(xy);
		}
	}

	//addWeighted(xgrad, 0.5, ygrad, 0.5, 0, xygrad);
	imshow("xygrad", xygrad);

	//Sobel(gray_src, xgrad, -1, 1, 0, 3);
	//Sobel(gray_src, ygrad, -1, 0, 1, 3);

	imshow("xgrad", xgrad);
	imshow("ygrad", ygrad);

	waitKey(0);
	return 0;
}
*/
//边缘提取
//sobel离散微分算子,计算图像灰度的近似梯度
//高斯平滑和微分求导
//高斯平滑——》转灰度——》求梯度x和y——》振幅图像