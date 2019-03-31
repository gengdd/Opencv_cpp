#include<opencv2/opencv.hpp>
#include<iostream>
#include"math.h"

using namespace std;
using namespace cv;
/*
Mat src, gray_src;
int max_corners = 30;
int max_count = 50;
void SubPiexl_Demo(int, void*);

int main() {
	src = imread("D:/AI/opencv_learning/test.jpg");
	if (src.empty()) {
		printf("could not load\n");
		return -1;
	}
	namedWindow("input", CV_WINDOW_AUTOSIZE);
	imshow("input", src);

	cvtColor(src, gray_src, COLOR_BGR2GRAY);
	namedWindow("output", CV_WINDOW_AUTOSIZE);

	createTrackbar("demo", "output", &max_corners, max_count, SubPiexl_Demo);
	SubPiexl_Demo(0, 0);

	waitKey(0);
	return 0;
}
void SubPiexl_Demo(int, void*) {
	if (max_corners > 5) {
		max_corners = 5;
	}
	vector<Point2f> corners;
	double qualityLevel = 0.01;
	double minDistance = 10;
	int blockSize = 3;
	double k = 0.04;
	goodFeaturesToTrack(gray_src, corners, max_corners, qualityLevel, minDistance, Mat(), blockSize, false, k);
	cout << "num: " << corners.size() << endl;
	Mat resultImg = src.clone();
	for (size_t t = 0; t < corners.size(); t++) {
		circle(resultImg, corners[t], 2, Scalar(0, 0, 255), 2, 8, 0);
	}
	imshow("output", resultImg);

	Size winSize = Size(5, 5);
	Size  zerozone = Size(-1, -1);
	TermCriteria tc = TermCriteria(TermCriteria::EPS + TermCriteria::MAX_ITER, 40, 0.001);
	cornerSubPix(gray_src, corners, winSize, zerozone, tc);

	for (size_t t = 0; t < corners.size(); t++) {
		cout << (t + 1) << corners[t].x << " "
			<< corners[t].y << endl;
	}
	return;
}
*/
//插值方法
//图像矩计算
//曲线拟合（高斯，多项式，椭圆）