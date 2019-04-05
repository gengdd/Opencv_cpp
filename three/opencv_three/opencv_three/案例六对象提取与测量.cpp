#include<iostream>
#include<opencv2/opencv.hpp>
#include<math.h>
using namespace cv;
using namespace std;

/*
int main() {
	Mat src = imread("D:/AI/opencv_learning/对象提取与测量.png");
	if (src.empty()) {
		return -1;
	}
	namedWindow("input", CV_WINDOW_AUTOSIZE);
	imshow("input", src);

	Mat blurImg;
	GaussianBlur(src, blurImg, Size(15, 15), 0, 0);

	Mat gray_src, binary;
	cvtColor(blurImg, gray_src, COLOR_BGR2GRAY);
	threshold(gray_src, binary, 0, 255, THRESH_BINARY | THRESH_TRIANGLE);
	imshow("bianry", binary);

	Mat morphImg;
	Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3), Point(-1, -1));
	morphologyEx(binary, morphImg, MORPH_CLOSE, kernel, Point(-1, -1), 2);
	imshow("mor", morphImg);


	vector<vector<Point>> contours;
	vector<Vec4i> hireachy;
	Mat contoursImg = Mat::zeros(src.size(), CV_8UC3);
	findContours(morphImg, contours, hireachy, CV_RETR_EXTERNAL, CHAIN_APPROX_SIMPLE, Point());
	for (size_t t = 0; t < contours.size(); t++) {
		Rect rect = boundingRect(contours[t]);
		if (rect.width < src.cols / 2)
			continue;
		double area = contourArea(contours[t]);
		double len = arcLength(contours[t], true);
		printf("%f\n", area);
		printf("%f\n", len);
		drawContours(contoursImg, contours, static_cast<int>(t), Scalar(0, 0, 255), 1, 8, hireachy);
	}
	imshow("cont", contoursImg);

	waitKey(0);
	return 0;
}
*/