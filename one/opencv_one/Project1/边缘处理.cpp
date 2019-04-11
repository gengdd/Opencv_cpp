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
		printf("could not load");
		return -1;
	}
	char input[] = "input";
	char output[] = "output";
	namedWindow(input, CV_WINDOW_AUTOSIZE);
	namedWindow(output, CV_WINDOW_AUTOSIZE);
	imshow(input, src);

	int top = (int)(0.05*src.rows);
	int bottom = (int)(0.05*src.rows);
	int left = (int)(0.05*src.cols);
	int right = (int)(0.05*src.cols);
	RNG rng(12345);
	int borderType = BORDER_DEFAULT;

	int c = 0;
	while (true) {
		c = waitKey(500);
		if ((char)c == 27) {
			break;
		}
		if ((char)c == 'r') {
			borderType = BORDER_REPLICATE;
		}
		else if ((char)c == 'v') {
			borderType = BORDER_CONSTANT;
		}
		else if ((char)c == 'c'){
			borderType = BORDER_WRAP;
		}
		Scalar color = Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255));
		copyMakeBorder(src, dst, top, bottom, left, right, borderType, color);
		imshow(output, dst);
	}

	waitKey(0);
	return 0;
}
*/
//default
//constant指定像素
//replicate用已知像素
//warp补偿

