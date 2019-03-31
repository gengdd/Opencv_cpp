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
	
	char input_win[] = "input image";
	namedWindow(input_win, CV_WINDOW_AUTOSIZE);
	imshow(input_win, src);

	int height = src.rows;
	int width = src.cols;
	dst = Mat::zeros(src.size(), src.type());
	float alpha = 1.2;
	float beta = 10;

	//cvtColor(src, src, CV_BGR2GRAY);

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			if (src.channels() == 3) {
				float b = src.at<Vec3b>(row, col)[0];
				float g = src.at<Vec3b>(row, col)[1];
				float r = src.at<Vec3b>(row, col)[2];

				dst.at<Vec3b>(row, col)[0] = saturate_cast<uchar>(b*alpha + beta);
				dst.at<Vec3b>(row, col)[1] = saturate_cast<uchar>(g*alpha + beta);
				dst.at<Vec3b>(row, col)[2] = saturate_cast<uchar>(r*alpha + beta);
			}
			else if (src.channels() == 1) {
				float v = src.at<uchar>(row, col);
				dst.at<uchar>(row, col) = saturate_cast<uchar>(v*alpha + beta);
			}
		}
	}

	char output_title[] = "contrast and brightness demo";
	namedWindow(output_title, CV_WINDOW_AUTOSIZE);
	imshow(output_title, dst);

	waitKey(0);
	return 0;
}
*/

//像素变换（点操作）
//邻域操作（区域）
//g(i,j)=αf(i,j)+β  α>0 β增益变量
//api Mat::zeros
//saturate_cast<uchar>
//Mat.at<Vec3b>(y,x)[index]
//BGR 顺序
//convertTo 先转化再Vec3f

