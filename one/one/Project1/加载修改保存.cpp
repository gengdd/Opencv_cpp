#include<iostream>
#include<opencv2/opencv.hpp>
#include<math.h>

using namespace cv;
/*
int main() {
	//Mat src = imread("D:/AI/opencv_learning/test.jpg", IMREAD_GRAYSCALE);
	Mat src = imread("D:/AI/opencv_learning/test.jpg");
	if (src.empty()) {
		printf("could not load");
		return -1;
	}
	//imshow("opencv setup demo", src);

	Mat output_image;
	//cvtColor(src, output_image, CV_BGR2GRAY);
	//cvtColor(src, output_image, CV_BGR2HLS);
	cvtColor(src, output_image, CV_BGR2HSV);
	imshow("output windows", output_image);

	//imwrite("hlsimage.png", output_image);

	waitKey(0);
	return 0;
}
*/

//IMREAD_GRAYSCALE 灰度图
//nameWindows 自动创建与释放
//cvtColor 色彩空间转换 HLS亮度饱和度 HSV
//imwrite 格式jpg,png,tif


