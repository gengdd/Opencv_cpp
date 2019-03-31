#include<opencv2/opencv.hpp>
#include<iostream>
#include<math.h>

using namespace std;
using namespace cv;
/*
Mat src, dst;
Mat gray_src;
char input[] = "input";
char output[] = "output";
int threshold_value = 127;
int threshold_max = 255;
int type_value = 2;
int type_max = 4;
void Threshold_demo(int, void*);

int main() {
	src = imread("D:/AI/opencv_learning/test.jpg");
	if (!src.data) {
		printf("counld not load");
		return -1;
	}

	namedWindow(input, CV_WINDOW_AUTOSIZE);
	namedWindow(output, CV_WINDOW_AUTOSIZE);
	imshow(input, src);

	createTrackbar("threshold value", output, &threshold_value, threshold_max, Threshold_demo);
	createTrackbar("type value", output, &type_value, type_max, Threshold_demo);
	Threshold_demo(0, 0);

	waitKey(0);
	return 0;
}
void Threshold_demo(int, void*) {
	cvtColor(src, gray_src, CV_BGR2GRAY);
	printf("%d", THRESH_BINARY);
	printf("%d", THRESH_BINARY_INV);
	printf("%d", THRESH_TRUNC);
	printf("%d", THRESH_TOZERO);
	printf("%d", THRESH_TOZERO_INV);

	//threshold(gray_src, dst, threshold_value, threshold_max, THRESH_BINARY);//最后一个参数
	//threshold(gray_src, dst, threshold_value, threshold_max, type_value);
	//threshold(gray_src, dst, 0, 255, THRESH_OTSU | type_value);
	threshold(gray_src, dst, 0, 255, THRESH_TRIANGLE | type_value);

	imshow(output, dst);
}
*/
//阈值threshold
//阈值二值化
//阈值截断
//取零反取零
//otsu triangle 产生阈值