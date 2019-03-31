#include<opencv2/opencv.hpp>
#include<iostream>
#include"math.h"
#include<opencv2/xfeatures2d.hpp>

using namespace std;
using namespace cv;
/*
int main() {
	Mat src = imread("D:/AI/opencv_learning/test.jpg", IMREAD_GRAYSCALE);
	if (src.empty()) {
		printf("could not load");
		return -1;
	}
	namedWindow("input", CV_WINDOW_AUTOSIZE);
	namedWindow("output", CV_WINDOW_AUTOSIZE);
	imshow("input", src);

	waitKey(0);
	return 0;
}
*/
//高类间变异性
//低类内变异性
//局部强度差
//不同尺度
//计算效率高
//haar小波
