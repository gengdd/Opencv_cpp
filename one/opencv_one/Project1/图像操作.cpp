#include<opencv2/opencv.hpp>
#include<iostream>
#include<math.h>

using namespace std;
using namespace cv;

/*
int main() {
	Mat src;
	src = imread("D:/AI/opencv_learning/test.jpg");
	if (src.empty()) {
		cout << "could not load" << endl;
		return -1;
	}

	namedWindow("input", CV_WINDOW_AUTOSIZE);
	imshow("input", src);


	Mat gray_src;
	cvtColor(src, gray_src, CV_BGR2GRAY);
	namedWindow("output", CV_WINDOW_AUTOSIZE);
	imshow("output", gray_src);

	//单通道
	int height = gray_src.rows;
	int width = gray_src.cols;
	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			int gray = gray_src.at<uchar>(row, col);
			gray_src.at<uchar>(row, col) = 255 - gray;
		}
	}
	imshow("gray inver", gray_src);

	Mat dst;
	dst.create(src.size(), src.type());
	height = src.rows;
	width = src.cols;
	int nc = src.channels();


	//for (int row = 0; row < height; row++) {
	//	for (int col = 0; col < width; col++) {
	//		if (nc == 1) {
	//			int gray = gray_src.at<uchar>(row, col);
	//			gray_src.at<uchar>(row, col) = 255 - gray;
	//		}
	//		else if (nc==3)
	//		{
	//			//读取通道
	//			int b = dst.at<Vec3b>(row, col)[0];
	//			int g = dst.at<Vec3b>(row, col)[1];
	//			int r = dst.at<Vec3b>(row, col)[2];
	//			dst.at<Vec3b>(row, col)[0] = 255 - b;
	//			dst.at<Vec3b>(row, col)[1] = 255 - g;
	//			dst.at<Vec3b>(row, col)[2] = 255 - r;
	//		}
	//	}
	//}

	//bitwise_not(src, dst);

	imshow("caise inver", dst);

	waitKey(0);
	return 0;
}
*/