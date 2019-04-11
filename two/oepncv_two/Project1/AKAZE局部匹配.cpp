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

	//Ptr<KAZE> detector = KAZE::create();
	//Ptr<AKAZE> detector = AKAZE::create();
	//vector<KeyPoint> keyps;
	//detector->detect(src, keyps, Mat());

	//Mat keypsImg;
	//drawKeypoints(src, keyps, keypsImg, Scalar::all(-1), DrawMatchesFlags::DEFAULT);
	//imshow("output", keypsImg);

	Ptr<AKAZE> detector = AKAZE::create();
	vector<KeyPoint> keyps1;
	vector<KeyPoint> keyps2;
	Mat des1, des2;
	detector->detectAndCompute(image1, Mat(), keyps1, des1);
	detector->detectAndCompute(image2, Mat(), keyps2, des2);

	BFMatcher matcher;
	vector<DMatch> matches;
	matcher.match(des1, des2, matches);

	Mat resultImg;
	drawMatches(image1, keyps1, image2, keyps2, matches, resultImg);

	vector<DMatch> goodmatches;
	double mindist = 10000, maxdist = 0;
	for (int i = 0; i < des1.rows; i++) {
		double dist = matches[i].distance;
		if (dist < mindist)
			mindist = dist;
		if (dist > maxdist)
			maxdist = dist;
	}

	for (int i = 0; i < des1.rows; i++) {
		double dist = matches[i].distance;
		if (dist < max(2 * mindist, 0.02)) {
			goodmatches.push_back(matches[i]);
		}
	}

	drawMatches(image1, keyps1, image2, keyps2, goodmatches, resultImg);
	imshow("output", resultImg);

	waitKey(0);
	return 0;
}
*/
//AOS构造尺度空间
//Hessian矩阵特征点检测
//方向指定基于一阶微分图像
//描述子生成