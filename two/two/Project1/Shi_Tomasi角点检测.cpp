#include<opencv2/opencv.hpp>
#include<iostream>

using namespace std;
using namespace cv;
/*
Mat src, gray_src;
int num_corners = 25;
int max_corners = 200;
RNG rng(12345);
const char* output = "output";
void ShiTomsi_Demo(int, void*);
int main() {
	src = imread("D:/AI/opencv_learning/test.jpg");
	if (src.empty()) {
		printf("could not load");
		return -1;
	}
	namedWindow("input", CV_WINDOW_AUTOSIZE);
	imshow("input", src);

	cvtColor(src, gray_src, COLOR_BGR2GRAY);

	namedWindow(output, CV_WINDOW_AUTOSIZE);

	createTrackbar("demo", output, &num_corners, max_corners, ShiTomsi_Demo);
	ShiTomsi_Demo(0, 0);

	waitKey(0);
	return 0;
}
void ShiTomsi_Demo(int, void*) {
	if (num_corners < 5) {
		num_corners = 5;
	}
	vector<Point2f> corners;
	double qualityLevel = 0.01;
	double minDistansce = 10;
	int blockSize = 3;
	bool useHarris = false;
	double k = 0.04;
	Mat resultImg = src.clone();

	goodFeaturesToTrack(gray_src, corners, num_corners, qualityLevel, minDistansce, Mat(), blockSize, useHarris, k);
	printf("number of corners:%d\n", corners.size());

	for (size_t t = 0; t < corners.size(); t++) {
		circle(resultImg, corners[t], 2, Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255)), 2, 8, 0);
	}
	imshow(output, resultImg);
}
*/