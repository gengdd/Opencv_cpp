#include<opencv2/opencv.hpp>
#include<iostream>
#include<math.h>

using namespace std;
using namespace cv;
/*
Mat src, gray_src;
int threshold_v = 80;
int threshold_max = 255;
const char* output = "output";
const char* input = "input";
RNG rng(12345);
void Demo_Moments(int, void*);
int main() {
	src = imread("D:/AI/opencv_learning/test.jpg");
	if (!src.data) {
		printf("could not load");
		return -1;
	}

	namedWindow(input, CV_WINDOW_AUTOSIZE);
	namedWindow(output, CV_WINDOW_AUTOSIZE);
	imshow(input, src);

	cvtColor(src, gray_src, CV_BGR2GRAY);
	GaussianBlur(gray_src, gray_src, Size(3, 3), 0, 0);

	createTrackbar("demo", output, &threshold_v, threshold_max, Demo_Moments);
	Demo_Moments(0, 0);

	waitKey(0);
	return 0;
}
void Demo_Moments(int, void*) {
	Mat canny_output;
	vector<vector<Point>> contours;
	vector<Vec4i> hierachy;

	Canny(gray_src, canny_output, threshold_v, threshold_v * 2, 3, false);
	findContours(canny_output, contours, hierachy, RETR_TREE, CHAIN_APPROX_SIMPLE, Point(0, 0));

	vector<Moments> contours_moments(contours.size());
	vector<Point2f> ccs(contours.size());
	for (size_t i = 0; i < contours.size(); i++) {
		contours_moments[i] = moments(contours[i]);
		ccs[i] = Point(static_cast<float>(contours_moments[i].m10 / contours_moments[i].m00), static_cast<float>(contours_moments[i].m01 / contours_moments[i].m00));
	}

	//Mat drawImg = Mat::zeros(src.size(), CV_8UC3);
	Mat drawImg;
	src.copyTo(drawImg);
	for (size_t i = 0; i < contours.size(); i++) {
		Scalar color = Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255));
		printf("center point %.2f,%.2f\n", ccs[i].x, ccs[i].y);
		printf("%d,%.2f,%.2f\n", i, contourArea(contours[i], true), arcLength(contours[i], true));
		drawContours(drawImg, contours, i, color, 2, 8, hierachy, 0, Point(0, 0));
		circle(drawImg, ccs[i], 2, color, 2, 8);
	}

	imshow(output, drawImg);
}
*/
//几何矩
//中心矩
//中心归一化矩