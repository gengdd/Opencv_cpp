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

	namedWindow("input", CV_WINDOW_AUTOSIZE);
	imshow("input", src);

	char output[] = "output";
	namedWindow(output, CV_WINDOW_AUTOSIZE);
	
	Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3), Point(-1, -1));
	//morphologyEx(src, dst, CV_MOP_OPEN, kernel);
	morphologyEx(src, dst, CV_MOP_BLACKHAT, kernel);

	imshow(output, dst);

	waitKey(0);
	return 0;
}
*/

//开操作 先腐蚀后膨胀
//闭操作 先膨胀后腐蚀
//形态学梯度 膨胀-腐蚀     内部梯度、方向梯度
//顶帽 原图像与开操作差值图像
//黑帽 闭操作与原图像差值图像
//getStructuringElement结构元素
//二值化图像