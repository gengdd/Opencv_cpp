#include<opencv2/opencv.hpp>
#include<iostream>
#include"math.h"
#include<opencv2/xfeatures2d.hpp>

using namespace std;
using namespace cv;
using namespace cv::xfeatures2d;
/*
int main() {

	string cascdeFilePath = "D:/Download/IDM/opencv3.4/opencv/new build/install/etc/haarcascades/haarcascade_frontalface_alt.xml";
	CascadeClassifier face_cascade;
	if (!face_cascade.load(cascdeFilePath)) {
		printf("could not load");
		return -1;
	}

	Mat src, gray_src;
	src = imread("D:/AI/opencv_learning/test.jpg");
	cvtColor(src, gray_src, COLOR_BGR2GRAY); 
	equalizeHist(gray_src, gray_src);

	vector<Rect> faces;
	face_cascade.detectMultiScale(gray_src, faces, 1.1, 2, 0, Size(30, 30));
	for (size_t t = 0; t < faces.size(); t++) {
		rectangle(src, faces[t], Scalar(0, 0, 255), 2, 8, 0);
	}

	imshow("output", src);
	waitKey(0);
	return 0;
}
*/
//