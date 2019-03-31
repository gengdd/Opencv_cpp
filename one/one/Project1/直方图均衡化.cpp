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

	cvtColor(src, src, CV_BGR2GRAY);
	equalizeHist(src, dst);
	imshow(ouput, dst);

	waitKey(0);
	return 0;
}
*/