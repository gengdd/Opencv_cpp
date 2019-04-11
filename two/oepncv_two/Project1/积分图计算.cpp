#include<opencv2/opencv.hpp>
#include<iostream>
#include"math.h"
#include<opencv2/xfeatures2d.hpp>

using namespace std;
using namespace cv;
using namespace cv::xfeatures2d;
/*
int main() {
	Mat src = imread("D:/AI/opencv_learning/test.jpg", IMREAD_GRAYSCALE);
	if (src.empty()) {
		printf("could not load");
		return -1;
	}
	namedWindow("input", CV_WINDOW_AUTOSIZE);
	namedWindow("output", CV_WINDOW_AUTOSIZE);
	imshow("input", src);

	Mat sumii = Mat::zeros(src.rows + 1, src.cols + 1, CV_32FC1);
	Mat sqsumii = Mat::zeros(src.rows + 1, src.cols + 1, CV_64FC1);

	integral(src, sumii, sqsumii);

	Mat iiresult;
	normalize(sumii, iiresult, 0, 255, NORM_MINMAX,CV_8UC1,Mat());
	imshow("output", iiresult);

	waitKey(0);
	return 0;
}
*/
