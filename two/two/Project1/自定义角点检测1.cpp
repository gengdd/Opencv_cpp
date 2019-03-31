#include<opencv2/opencv.hpp>
#include<iostream>
#include"math.h"

using namespace std;
using namespace cv;
/*
int blockSize = 3;
int ksize = 3;
double k = 0.04;	
double harris_min, harris_max;
int qualityLevel = 30;
int max_count = 100;
void CustomHarris_Demo(int, void*);
Mat harris_dst;
Mat src, gray_src;
Mat harrisRspimg;

int main() {
	src = imread("D:/AI/opencv_learning/test.jpg");
	if (src.empty()) {
		printf("could not load\n");
		return -1;
	}
	namedWindow("input", CV_WINDOW_AUTOSIZE);
	imshow("input", src);

	cvtColor(src, gray_src, COLOR_BGR2GRAY);
	harris_dst = Mat::zeros(src.size(), CV_32FC(6));

	cornerEigenValsAndVecs(gray_src, harris_dst, blockSize, ksize, 4);

	harrisRspimg = Mat::zeros(src.size(), CV_32FC1);

	for (int row = 0; row < harris_dst.rows; row++) {
		for (int col = 0; col < harris_dst.cols; col++) {
			double lambda1 = harris_dst.at<Vec6f>(row, col)[0];
			double lambda2 = harris_dst.at<Vec6f>(row, col)[1];
			harrisRspimg.at<float>(row, col) = lambda1 * lambda2 - k * pow((lambda1 + lambda2), 2);
		}
	}

	minMaxLoc(harrisRspimg, &harris_min, &harris_max, 0, 0, Mat());

	namedWindow("output", CV_WINDOW_AUTOSIZE);
	createTrackbar("demo", "output", &qualityLevel, max_count, CustomHarris_Demo);
	CustomHarris_Demo(0, 0);

	waitKey(0);
	return 0;
}
void CustomHarris_Demo(int, void*) {
	if (qualityLevel < 10) {
		qualityLevel = 10;
	}
	Mat resultImg = src.clone();
	float t = harris_min + (((double)qualityLevel) / max_count)*(harris_max - harris_min);
	for (int row = 0; row < src.rows; row++) {
		for (int col = 0; col < src.cols; col++) {
			float v = harrisRspimg.at<float>(row, col);
			if (v > t) {
				circle(resultImg, Point(col, row), 2, Scalar(0, 0, 255), 2, 8, 0);
			}
		}
	}
	imshow("output", resultImg);
}
*/

