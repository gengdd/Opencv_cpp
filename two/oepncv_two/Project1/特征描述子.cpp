#include<opencv2/opencv.hpp>
#include<iostream>
#include"math.h"
#include<opencv2/xfeatures2d.hpp>

using namespace std;
using namespace cv;
using namespace cv::xfeatures2d;
/*
int main() {
	Mat image1 = imread("D:/AI/opencv_learning/test.jpg", IMREAD_GRAYSCALE);
	Mat image2 = imread("D:/AI/opencv_learning/test1.jpg", IMREAD_GRAYSCALE);
	if (image1.empty()) {
		printf("could not load");
		return -1;
	}

	int minHessian = 400;
	Ptr<SURF> detector = SURF::create(minHessian);
	vector<KeyPoint> keypoint1;
	vector<KeyPoint> keypoint2;

	Mat descripter1, descripter2;
	detector->detectAndCompute(image1, Mat(), keypoint1, descripter1);
	detector->detectAndCompute(image2, Mat(), keypoint2, descripter1);

	BFMatcher matcher;
	vector<DMatch> matches;
	matcher.match(descripter1, descripter2, matches);

	Mat matchesImg;
	drawMatches(image1, keypoint1, image2, keypoint2, matches, matchesImg);
	imshow("output", matchesImg);

	waitKey(0);
	return 0;
}
*/
