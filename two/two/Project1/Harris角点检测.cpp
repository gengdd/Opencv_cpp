#include<opencv2/opencv.hpp>
#include<iostream>

using namespace std;
using namespace cv;
/*
Mat src, grayz_src;
const char* output = "output";
int thresh = 130;
int max_count = 255;
void Harris_Demo(int, void*);
int main() {
	src = imread("D:/AI/opencv_learning/test.jpg");
	if (src.empty()) {
		printf("could not load");
		return -1;
	}
	namedWindow("input", CV_WINDOW_AUTOSIZE);
	namedWindow(output, CV_WINDOW_AUTOSIZE);
	imshow("input", src);

	cvtColor(src, grayz_src, COLOR_BGR2GRAY);
	createTrackbar("Demo", output, &thresh, max_count, Harris_Demo);
	Harris_Demo(0, 0);

	waitKey(0);
	return 0;
}
void Harris_Demo(int, void*) {
	Mat dst, normdst;
	dst = Mat::zeros(grayz_src.size(), CV_32FC1);

	int blockSize = 2;
	int Ksize = 3;
	double k = 0.04;
	cornerHarris(grayz_src, dst, blockSize, Ksize, k, BORDER_DEFAULT);
	normalize(dst, normdst, 0, 255, NORM_MINMAX, CV_32FC1, Mat());
	convertScaleAbs(normdst, normdst);

	Mat resultImg = src.clone();
	for (int row = 0; row < resultImg.rows; row++) {
		uchar* currentRow = normdst.ptr(row);
		for (int col = 0; col < resultImg.cols; col++) {
			int value = (int)* currentRow;
			if (value > thresh) {
				circle(resultImg, Point(col, row), 2, Scalar(0, 0, 255), 2, 8, 0);
			}
			currentRow++;
		}
	}
	imshow(output, resultImg);
}
*/
//