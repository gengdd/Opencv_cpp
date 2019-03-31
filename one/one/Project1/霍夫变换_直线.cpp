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

	Canny(src, src_gray, 100, 200);
	cvtColor(src_gray, dst, CV_GRAY2BGR);
	imshow("edg_image", src_gray);

	vector<Vec4f> plines;
	HoughLinesP(src_gray, plines, 1, CV_PI / 180.0, 10, 0, 0);
	Scalar color = Scalar(0, 0, 255);
	for (size_t i = 0; i < plines.size(); i++) {
		Vec4f hline = plines[i];
		line(dst, Point(hline[0], hline[1]),Point(hline[2], hline[3]), color, 3, LINE_AA);
	}
	imshow(ouput, dst);

	waitKey(0);
	return 0;
}
*/
//霍夫变换——直线检测    圆检测
//Hough Line transform做直线检测
//前提条件——边缘检测已经完成
//平面空间到极坐标空间的转换