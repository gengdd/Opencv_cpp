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
//������� �߶ȿռ� ѡ�񲻱��� ��������
//D���D����Mƥ��
//���裺
//ѡ��POI Hessian matrix  //����ͼ��
//��ͬ�߶ȿռ�ؼ��㣬������ź�����
//���������㷽������ת������
//�����������������ղ�����