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
	char input[] = "input";
	char output[] = "output";
	namedWindow(input, CV_WINDOW_AUTOSIZE);
	namedWindow(output, CV_WINDOW_AUTOSIZE);
	imshow(input, src);

	pyrUp(src, dst, Size(src.cols * 2, src.rows * 2));
	imshow(output, dst);

	Mat s_down;
	pyrDown(src, s_down, Size(src.cols / 2, src.rows / 2));
	imshow("output_down", s_down);

	Mat g1, g2;
	Mat gray_src,dogIng;
	cvtColor(src, gray_src, CV_BGR2GRAY);
	GaussianBlur(src, g1, Size(3, 3), 0, 0);
	GaussianBlur(g1, g2, Size(3, 3), 0, 0);
	subtract(g1, g2, dogIng, Mat());
	normalize(dogIng, dogIng, 255, 0, NORM_MINMAX);
	imshow("dog", dogIng);

	waitKey(0);
	return 0;
}
*/
//图像金字塔
//高斯金字塔
//DOG高斯不同
//拉普拉斯金字塔