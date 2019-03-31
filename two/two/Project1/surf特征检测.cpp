#include<opencv2/opencv.hpp>
#include<opencv2/xfeatures2d.hpp>
#include<iostream>
#include"math.h"

using namespace std;
using namespace cv;
using namespace cv::xfeatures2d;
/*
Mat src;
int main() {
	src = imread("D:/AI/opencv_learning/test.jpg",IMREAD_GRAYSCALE);
	if (!src.data) {
		printf("could not load\n");
		return -1;
	}
	namedWindow("input", CV_WINDOW_AUTOSIZE);
	imshow("input", src);

	int minHessian = 100;
	Ptr<SURF> detector = SURF::create((100.0), 4, 3, false, false);
	vector<KeyPoint> kps;
	detector->detect(src, kps, Mat());

	Mat kpImg;
	drawKeypoints(src, kps, kpImg, Scalar::all(-1), DrawMatchesFlags::DEFAULT);
	imshow("output", kpImg);

	waitKey(0);
	return 0;
}
*/
//特征检测 尺度空间 选择不变性 特征向量
//D检测D描述M匹配
//步骤：
//选择POI Hessian matrix  //积分图像
//不同尺度空间关键点，非最大信号抑制
//发现特征点方法，旋转不变性
//生成特征向量，光照不变性