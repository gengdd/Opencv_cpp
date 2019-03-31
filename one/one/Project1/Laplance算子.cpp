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

	Mat gray_src,edg_image;
	GaussianBlur(src, dst, Size(3, 3), 0, 0);
	cvtColor(dst, gray_src, CV_RGB2GRAY);

	Laplacian(gray_src, edg_image, CV_16S, 3);
	convertScaleAbs(edg_image, edg_image);

	threshold(edg_image, edg_image, 0, 255, THRESH_OTSU | THRESH_BINARY);

	imshow(output, edg_image);

	waitKey(0);
	return 0;
}
*/
//边缘二阶导数为零点
//