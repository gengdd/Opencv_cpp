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
//�����߶ȿռ䣬Ѱ�Ҽ�ֵ
//�ؼ��㶨λ   //׼ȷλ����ɾ������Ե
//�ؼ��㷽��ָ��
//�ؼ���������