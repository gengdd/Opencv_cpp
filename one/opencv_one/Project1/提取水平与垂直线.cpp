#include<opencv2/opencv.hpp>
#include<iostream>
#include<math.h>

using namespace std;
using namespace cv;
/*
int main() {
	Mat src, dst;
	src = imread("D:/AI/opencv_learning/test.jpg");
	if (!src.data) {
		printf("counld not load");
		return -1;
	}

	namedWindow("input", CV_WINDOW_AUTOSIZE);
	imshow("input", src);


	Mat gray_src;
	cvtColor(src, gray_src, CV_BGR2GRAY);
	imshow("gray", gray_src);

	Mat binIng;
	adaptiveThreshold(~gray_src, binIng, 255, ADAPTIVE_THRESH_MEAN_C, THRESH_BINARY, 15, -2);
	imshow("binary", binIng);

	Mat hline = getStructuringElement(MORPH_RECT, Size(src.cols / 16, 1), Point(-1, -1));
	Mat vline = getStructuringElement(MORPH_RECT, Size(1, src.rows / 16), Point(-1, -1));

	Mat temp;
	//erode(binIng, temp, hline);
	//dilate(temp, dst, hline);
	//bitwise_not(dst, dst);

	//erode(binIng, temp, vline);
	//dilate(temp, dst, vline);
	morphologyEx(binIng, dst, CV_MOP_OPEN, vline);
	bitwise_not(dst, dst);

	imshow("output", dst);

	waitKey(0);
	return 0;
}
*/
//adaptiveThreshold
//块的大小
//彩色——》灰——》二值——》腐蚀膨胀