#include<opencv2/opencv.hpp>
#include<iostream>
#include<math.h>

using namespace std;
using namespace cv;
/*
Mat src, dst;
const char output[] = "output";
const char input[] = "input";
int threshold_value = 100;
int threshold_max = 255;
RNG rng(12345);
void Threshold_Callback(int, void*);
int main() {
	src = imread("D:/AI/opencv_learning/test.jpg");
	if (!src.data) {
		printf("could not load");
		return -1;
	}

	namedWindow(input, CV_WINDOW_AUTOSIZE);
	namedWindow(output, CV_WINDOW_AUTOSIZE);
	imshow(input, src);

	cvtColor(src, src, CV_BGR2GRAY);
	blur(src, src, Size(3, 3), Point(-1, -1), BORDER_DEFAULT);

	createTrackbar("demo", output, &threshold_value, threshold_max, Threshold_Callback);
	Threshold_Callback(0, 0);

	waitKey(0);
	return 0;
}
void Threshold_Callback(int, void*) {
	Mat bin_output;
	vector<vector<Point>> contours;
	vector<Vec4i> hierachy;

	threshold(src, bin_output, threshold_value, threshold_max, THRESH_BINARY);
	findContours(bin_output, contours, hierachy, RETR_TREE, CHAIN_APPROX_SIMPLE, Point(0, 0));

	vector<vector<Point>> convexhulls(contours.size());
	for (rsize_t i = 0; i < contours.size(); i++) {
		convexHull(contours[i], convexhulls[i], false, true);
	}

	dst = Mat::zeros(src.size(), CV_8UC3);
	for (size_t k = 0; k < contours.size(); k++) {
		Scalar color = Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255));
		drawContours(dst, contours, k, color, 2, LINE_8, hierachy, 0, Point(0, 0));
		drawContours(dst, convexhulls, k, color, 2, LINE_8, Mat(), 0, Point(0, 0));
	}

	imshow(output, dst);
}
*/
//凸包——》计算几何
//graham
//convexHull
//灰度——》二值——》轮廓——》凸包