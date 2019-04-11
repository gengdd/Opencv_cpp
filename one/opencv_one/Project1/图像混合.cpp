#include<opencv2/opencv.hpp>
#include<iostream>
#include<math.h>

using namespace std;
using namespace cv;


/*
int main() {
	Mat src1, src2, dst;
	src1 = imread("D:/AI/opencv_learning/test.jpg");
	src2 = imread("D:/AI/opencv_learning/hlsimage.png");
	//if (src.empty()) {
	//	cout << "could not load" << endl;
	//	return -1;
	//}

	//namedWindow("input", CV_WINDOW_AUTOSIZE);
	//imshow("input", src);

	double alpha = 0.5;
	if (src1.rows == src2.rows && src1.cols == src2.cols && src1.type() == src2.type()) {
		addWeighted(src1, alpha, src2, (1.0 - alpha), 0.0, dst); 
		//add(src1, src2, dst, Mat());   效果不好
		//multiply(src1, src2, dst, 1.0);   相乘

		namedWindow("blend demo", CV_WINDOW_AUTOSIZE);
		imshow("blend demo", dst);
	}
	else
	{
		printf("could not blend iamges...");
		return -1;
	}

	waitKey(0);
	return 0;
}
*/

//线性混合
//g(x)=(1-a)f0(x)+af1(x) 
//addWeighted
//gamma校验值