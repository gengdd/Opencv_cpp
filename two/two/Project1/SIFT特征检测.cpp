#include<opencv2/opencv.hpp>
#include<iostream>
#include"math.h"
#include<opencv2/xfeatures2d.hpp>

using namespace std;
using namespace cv;
using namespace cv::xfeatures2d;
/*
int main() {
	Mat src = imread("D:/AI/opencv_learning/test.jpg",IMREAD_GRAYSCALE);
	if (!src.data) {
		printf("could not load\n");
		return -1;
	}
	namedWindow("input", CV_WINDOW_AUTOSIZE);
	imshow("input", src);

	int numFeatures = 100;
	Ptr<SIFT>detector = SIFT::create(numFeatures);
	vector<KeyPoint> keypoints;
	detector->detect(src, keypoints, Mat());
	printf("%d\n", keypoints.size());

	Mat keypointImg;
	drawKeypoints(src, keypoints, keypointImg, Scalar::all(-1), DrawMatchesFlags::DEFAULT);
	namedWindow("output", CV_WINDOW_AUTOSIZE);
	imshow("output", keypointImg);

	waitKey(0);
	return 0;
}
*/
//建立尺度空间，寻找极值
//关键点定位   //准确位置与删除弱边缘
//关键点方向指定
//关键点描述子