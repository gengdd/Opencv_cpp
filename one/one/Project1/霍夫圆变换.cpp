#include<opencv2/opencv.hpp>
#include<iostream>
#include<math.h>

using namespace std;
using namespace cv;
/*
int main() {
	Mat src, src_gray, dst;
	src = imread("D:/AI/opencv_learning/test.jpg");
	if (!src.data) {
		printf("could not load");
		return -1;
	}

	char input[] = "input";
	char ouput[] = "output";
	namedWindow(input, CV_WINDOW_AUTOSIZE);
	namedWindow(ouput, CV_WINDOW_AUTOSIZE);
	imshow(input, src);

	Mat msrc;
	medianBlur(src, msrc, 3);
	cvtColor(msrc, msrc, CV_BGR2GRAY);

	vector<Vec3f> pcircles;
	HoughCircles(msrc, pcircles, CV_HOUGH_GRADIENT, 1, 10, 100, 30, 5, 50);
	src.copyTo(dst);

	for (size_t i = 0; i < pcircles.size(); i++) {
		Vec3f cc = pcircles[i];
		circle(dst, Point(cc[0], cc[1]), cc[2], Scalar(0, 0, 255), 2, LINE_AA);
		circle(dst, Point(cc[0], cc[1]), 2, Scalar(98, 23, 255), 2, LINE_AA);
	}
	imshow(ouput, dst);

	waitKey(0);
	return 0;
}
*/
//圆检测——首先进行中值滤波
//基于图像梯度实现
//检测边缘——》发现可能圆心——》计算最佳半径