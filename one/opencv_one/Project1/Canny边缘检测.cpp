#include<opencv2/opencv.hpp>
#include<iostream>
#include<math.h>

using namespace std;
using namespace cv;
/*
Mat src, dst, gray_src;
void Canny_Demo(int, void*);
int t1_value = 50;
int max_value = 255;
char input[] = "input";
char output[] = "output";
int main() {

	src = imread("D:/AI/opencv_learning/test.jpg");
	if (!src.data) {
		printf("could not load");
		return -1;
	}

	namedWindow(input, CV_WINDOW_AUTOSIZE);
	namedWindow(output, CV_WINDOW_AUTOSIZE);
	imshow(input, src);

	cvtColor(src, gray_src, CV_BGR2GRAY);
	
	createTrackbar("value", output, &t1_value, max_value, Canny_Demo);
	Canny_Demo(0, 0);

	waitKey(0);
	return 0;
}
void Canny_Demo(int, void*) {
	Mat edg_image;
	blur(gray_src, gray_src, Size(3, 3), Point(-1, -1), BORDER_DEFAULT);
	Canny(gray_src, edg_image, t1_value, t1_value * 2, 3, false);

	//dst.create(src.size(), src.type());
	//src.copyTo(dst, edg_image);
	//imshow(output, edg_image);
	imshow(output, ~edg_image);
}
*/
//canny 边缘检测
//步骤
//高斯模糊——》灰度转换——》计算梯度——》非最大信号抑制——》高低阈值输出二值图
