#include<opencv2/opencv.hpp>
#include<iostream>
#include<math.h>

using namespace std;
using namespace cv;

/*
Mat src, dst;
char input[] = "input";
char ouput[] = "output";
int threshold_value = 100;
int threshold_max = 255;
RNG rng;
void Demo_Contours(int, void*);
int main() {
	src = imread("D:/AI/opencv_learning/test.jpg");
	if (!src.data) {
		printf("could not load");
		return -1;
	}

	namedWindow(input, CV_WINDOW_AUTOSIZE);
	namedWindow(ouput, CV_WINDOW_AUTOSIZE);
	imshow(input, src);

	cvtColor(src, src, CV_BGR2GRAY);
	createTrackbar("demo", ouput, &threshold_value, threshold_max, Demo_Contours);
	Demo_Contours(0, 0);

	waitKey(0);
	return 0;
}
void Demo_Contours(int, void*) {
	Mat canny_output;
	Canny(src, canny_output, threshold_value, threshold_value * 2, 3, false);

	vector<vector<Point>> points;
	vector<Vec4i> hiearchy;
	findContours(canny_output, points, hiearchy, RETR_TREE, CHAIN_APPROX_SIMPLE, Point(0, 0));

	dst = Mat::zeros(src.size(), CV_8UC3);
	RNG rng(12345);
	for (int i = 0; i < points.size(); i++) {
		Scalar color = Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255));
		drawContours(dst, points, i, color, 2, 8, hiearchy, 0, Point(0, 0));
	}
	imshow(ouput, dst);
}
*/
//find contour in your image
//基于边缘提取寻找对象轮廓
//发现
//绘制