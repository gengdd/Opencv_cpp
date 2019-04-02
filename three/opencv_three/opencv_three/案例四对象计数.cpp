#include<iostream>
#include<opencv2/opencv.hpp>
#include<math.h>
using namespace cv;
using namespace std;

/*
Mat src, gray_src, binary;
int main() {
	src = imread("D:/AI/opencv_learning/对象计数.png");
	if (src.empty()) {
		return -1;
	}
	namedWindow("input", CV_WINDOW_AUTOSIZE);
	imshow("input", src);

	cvtColor(src, gray_src, COLOR_BGR2GRAY);

	threshold(gray_src, binary, 0, 255, THRESH_BINARY | THRESH_TRIANGLE);
	imshow("binary", binary);

	Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3), Point(-1, -1));
	dilate(binary, binary, kernel, Point(-1, -1), 1);
	imshow("dilate", binary);

	Mat dist;
	bitwise_not(binary, binary);
	distanceTransform(binary, dist, CV_DIST_L2, 3);
	normalize(dist, dist, 0, 1.0, NORM_MINMAX);
	imshow("dist", dist);

	threshold(dist, dist, 0.59, 1.0, THRESH_BINARY);
	Mat dist_8u;
	dist.convertTo(dist_8u, CV_8U);
	adaptiveThreshold(dist_8u, dist_8u, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY, 77, 0.0);
	kernel = getStructuringElement(MORPH_RECT, Size(3, 3), Point(-1, -1));
	erode(dist_8u, dist_8u, kernel, Point(-1, -1), 1);
	dilate(dist_8u, dist_8u, kernel, Point(-1, -1), 5);
	//normalize(dist_8u, dist_8u, 0, 255, NORM_MINMAX);
	imshow("dist-binary", dist_8u);

	vector<vector<Point>> contours;
	findContours(dist_8u, contours, CV_RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);

	Mat markers = Mat::zeros(src.size(), CV_8UC3);
	RNG rng(12345);
	for (size_t t = 0; t < contours.size(); t++) {
		drawContours(markers, contours, static_cast<int>(t), Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255)), -1, 8, Mat());
	}

	printf("%d", contours.size());
	imshow("final", markers);

	waitKey(0);
	return 0;
}
*/
