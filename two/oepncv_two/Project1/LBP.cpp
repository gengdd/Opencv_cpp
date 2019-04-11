#include<opencv2/opencv.hpp>
#include<iostream>
#include"math.h"
#include<opencv2/xfeatures2d.hpp>

using namespace std;
using namespace cv;
using namespace cv::xfeatures2d;
/*
Mat src, grayz_src;
const char* output = "output";

int current_r = 3;
int max_count = 20;
void ELBP_Demo(int, void*);
int main() {
	src = imread("D:/AI/opencv_learning/test.jpg");
	if (src.empty()) {
		printf("could not load");
		return -1;
	}
	namedWindow("input", CV_WINDOW_AUTOSIZE);
	namedWindow(output, CV_WINDOW_AUTOSIZE);
	imshow("input", src);

	cvtColor(src, grayz_src, COLOR_BGR2GRAY);
	int width = grayz_src.cols;
	int height = grayz_src.rows;

	Mat lbpImg = Mat::zeros(height - 2, width - 2, CV_8UC1);
	for (int row = 1; row < height - 1; row++) {
		for (int col = 1; col < width - 1; col++) {
			uchar c = grayz_src.at<uchar>(row, col);
			uchar code = 0;
			code |= (grayz_src.at<uchar>(row - 1, col - 1) > c) << 7;
			code |= (grayz_src.at<uchar>(row - 1, col) > c) << 6;
			code |= (grayz_src.at<uchar>(row - 1, col + 1) > c) << 5;
			code |= (grayz_src.at<uchar>(row, col + 1) > c) << 4;
			code |= (grayz_src.at<uchar>(row + 1, col + 1) > c) << 3;
			code |= (grayz_src.at<uchar>(row + 1, col) > c) << 2;
			code |= (grayz_src.at<uchar>(row + 1, col - 1) > c) << 1;
			code |= (grayz_src.at<uchar>(row, col - 1) > c) << 0;
			lbpImg.at<uchar>(row - 1, col - 1) = code;
		}
	}
	imshow(output, lbpImg);


	namedWindow("ELBP", CV_WINDOW_AUTOSIZE);
	createTrackbar("demo", "ELBP", &current_r, max_count, ELBP_Demo);
	ELBP_Demo(0, 0);


	waitKey(0);
	return 0;
}
void ELBP_Demo(int, void*) {
	int offset = current_r * 2;
	Mat elbpImage = Mat::zeros(grayz_src.rows - offset, grayz_src.cols - offset, CV_8UC1);
	int width = grayz_src.cols;
	int height = grayz_src.rows;
	
	int numNei = 8;
	for (int i = 0; i < numNei; i++) {
		float x = static_cast<float>(current_r)*cos(2 * CV_PI*i / static_cast<float>(numNei));
		float y = static_cast<float>(current_r)*(-sin(2 * CV_PI*i / static_cast<float>(numNei)));
		
		int fx = static_cast<int>(floor(x));
		int fy = static_cast<int>(floor(y));
		int cx = static_cast<int>(ceil(x));
		int cy = static_cast<int>(ceil(y));

		float ty = y - fy;
		float tx = x - fx;

		float w1 = (1 - tx)*(1 - ty);
		float w2 = tx * (1 - ty);
		float w3 = (1 - tx)*ty;
		float w4 = tx * ty;

		for (int row = current_r; row < (height - current_r); row++) {
			for (int col = current_r; col < (width - current_r); col++) {
				float t = w1 * grayz_src.at<uchar>(row + fy, col + fx) + w2 * grayz_src.at<uchar>(row + fy, col + cx) 
					+ grayz_src.at<uchar>(row + cy, col + fx) + grayz_src.at<uchar>(row + cy, col + cx);
				elbpImage.at<uchar>(row - current_r, col - current_r) +=
					(t > grayz_src.at<uchar>(row, col)) && (abs(t - grayz_src.at<uchar>(row, col) > std::numeric_limits<float>::epsilon())) << i;
			}
		}
		imshow("ELBP", elbpImage);
	}
}
*/
//局部二值特征