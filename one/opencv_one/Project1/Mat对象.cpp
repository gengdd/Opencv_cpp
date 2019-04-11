#include<opencv2/opencv.hpp>
#include<iostream>
#include<math.h>
using namespace cv;
using namespace std;
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

	//Mat dst;
	//dst=Mat(src.size(), src.type());
	//dst = Scalar(127, 0, 255);

	//namedWindow("output", CV_WINDOW_AUTOSIZE);
	//imshow("output", dst);

	//Mat dst = src.clone();

	//Mat dst;
	//src.copyTo(dst);

	Mat dst;
	cvtColor(src, dst, CV_BGR2GRAY);
	printf("input %d\n", src.channels());
	printf("output %d\n", dst.channels());

	int cols = dst.cols;
	int rows = dst.rows;
	printf("row%d,col%d\n", rows, cols);

	const uchar* firstRow = dst.ptr<uchar>(0);
	printf("first pixel:%d\n", *firstRow);

	Mat M(3, 3, CV_8UC3, Scalar(0, 0, 255));
	cout << "M=" << M << endl;

	Mat m1;
	m1.create(src.size(), src.type());
	m1 = Scalar(0, 0, 255);

	Mat csrc;
	Mat kernel = (Mat_<float>(3, 3) << 0, -1, 0, -1, 5, -1, 0, -1, 0);
	filter2D(src, csrc, -1, kernel);

	namedWindow("output", CV_WINDOW_AUTOSIZE);
	imshow("output", dst);

	Mat m2 = Mat::zeros(src.size(), src.type());

	Mat m3 = Mat::zeros(2, 2, CV_8UC1);

	waitKey(0);
	return 0;
}
*/
//Mat 对象
//定义 克隆 小数组
//8uc3-> 0,0,255
//8uc1->255