#include<opencv2/opencv.hpp>
#include<iostream>
#include"math.h"
#include<opencv2/xfeatures2d.hpp>

using namespace std;
using namespace cv;
using namespace cv::xfeatures2d;
/*
int main() {
	Mat image1 = imread("D:/AI/opencv_learning/test1.jpg", IMREAD_GRAYSCALE);
	Mat image2 = imread("D:/AI/opencv_learning/test.jpg", IMREAD_GRAYSCALE);
	if (image1.empty()) {
		printf("could not load");
		return -1;
	}

	//Ptr<Feature2D> detector = BRISK::create();
	//vector<KeyPoint> keyps;
	//detector->detect(image2, keyps, Mat());

	//Mat resultImg;
	//drawKeypoints(image2, keyps, resultImg, Scalar::all(-1), DrawMatchesFlags::DEFAULT);
	//imshow("output", resultImg);

	Ptr<Feature2D> detector = BRISK::create();
	vector<KeyPoint> keyps1;
	vector<KeyPoint> keyps2;
	Mat des1, des2;
	detector->detectAndCompute(image1, Mat(), keyps1, des1);
	detector->detectAndCompute(image2, Mat(), keyps2, des2);

	BFMatcher matcher(NORM_L2);
	vector<DMatch> matches;
	matcher.match(des1, des2, matches);

	Mat resultImg;
	drawMatches(image1, keyps1, image2, keyps2, matches, resultImg);
	imshow("output", resultImg);

	waitKey(0);
	return 0;
}
*/
//构建尺度空间
//特征点检测
//fast9-16寻找特征点
//特征点定位
//关键点描述子