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
	if (!src.data) {
		printf("could not load\n");
		return -1;
	}
	namedWindow("input", CV_WINDOW_AUTOSIZE);
	imshow("input", src);


	//Mat dst, dst_gray;
	//resize(src, dst, Size(64, 128));
	//cvtColor(dst, dst_gray, COLOR_BGR2GRAY);

	//HOGDescriptor detector(Size(64, 128), Size(16, 16), Size(8, 8), Size(8, 8), 9);
	//vector<float> descriptors;
	//vector<Point> locations;
	//detector.compute(dst_gray, descriptors, Size(0, 0), Size(0, 0), locations);
	//printf("%d\n", descriptors.size());


	HOGDescriptor hog = HOGDescriptor();
	hog.setSVMDetector(hog.getDefaultPeopleDetector());

	vector<Rect> peoples;
	Mat result = src.clone();
	hog.detectMultiScale(src, peoples, 0, Size(8, 8), Size(32, 32), 1.05, 2, false);
	for (size_t t = 0; t < peoples.size(); t++) {
		rectangle(result, peoples[t], Scalar(0, 0, 255), 2, 8, 0);
	}
	namedWindow("output", CV_WINDOW_AUTOSIZE);
	imshow("output", result);

	waitKey(0);
	return 0;
}
*/
//灰度图像转换
//梯度计算
//分格网的梯度方向直方图
//块描述子
//块描述子归一化
//特征数据与检测窗口
//匹配方法