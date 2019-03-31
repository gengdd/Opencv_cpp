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
	vector<KeyPoint> keyps1;
	vector<KeyPoint> keyps2;
	Mat des_img1, des_img2;
	detector->detectAndCompute(image1, Mat(), keyps1, des_img1);
	detector->detectAndCompute(image2, Mat(), keyps2, des_img2);

	FlannBasedMatcher matcher;
	vector<DMatch> matches;
	matcher.match(des_img1, des_img2, matches);

	double minDist = 1000;
	double maxDist = 0;
	for (int i = 0; i < des_img1.rows; i++) {
		double dist = matches[i].distance;
		if (dist > maxDist) {
			maxDist = dist;
		}
		if (dist < minDist) {
			minDist = dist;
		}
	}
	printf("maxdist:%f\n", maxDist);
	printf("mindist:%f\n", minDist);

	vector<DMatch> goodMatches;
	for (int i = 0; i < des_img1.rows; i++) {
		double dist = matches[i].distance;
		if (dist < max(2 * minDist, 0.02)) {
			goodMatches.push_back(matches[i]);
		}
	}

	Mat matchesImg;
	drawMatches(image1, keyps1, image2, keyps2, goodMatches, matchesImg, Scalar::all(-1),
		Scalar::all(-1), vector<char>(), DrawMatchesFlags::NOT_DRAW_SINGLE_POINTS);
	imshow("output", matchesImg);

	waitKey(0);
	return 0;
}
*/