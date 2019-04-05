#include<iostream>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;

/*
String fileName = "D:/Download/IDM/opencv3.4/opencv/new build/install/etc/haarcascades/haarcascade_frontalface_alt.xml";
CascadeClassifier face_classifier;

int main() {
	if (!face_classifier.load(fileName)) {
		return -1;
	}

	Mat src = imread("D:/AI/opencv_learning/test.jpg");
	if (src.empty()) {
		return -1;
	}
	Mat gray_src;
	cvtColor(src, gray_src, COLOR_BGR2GRAY);

	equalizeHist(gray_src, gray_src);

	vector<Rect> face;
	face_classifier.detectMultiScale(gray_src, face, 1.1, 2, 0, Size(30,30));
	for (size_t t = 0; t < face.size(); t++) {
		rectangle(src, face[t], Scalar(0, 0, 255), 2, 8, 0);
	}
	namedWindow("face", CV_WINDOW_AUTOSIZE);
	imshow("face", src);

	waitKey(0);
	return 0;
}
*/

//int main() {
//
//	string cascdeFilePath = "D:/Download/IDM/opencv3.4/opencv/new build/install/etc/haarcascades/haarcascade_frontalface_alt.xml";
//	CascadeClassifier face_cascade;
//	if (!face_cascade.load(cascdeFilePath)) {
//		printf("could not load");
//		return -1;
//	}
//
//	Mat src, gray_src;
//	src = imread("D:/AI/opencv_learning/test.jpg");
//	cvtColor(src, gray_src, COLOR_BGR2GRAY);
//	equalizeHist(gray_src, gray_src);
//
//	vector<Rect> faces;
//	face_cascade.detectMultiScale(gray_src, faces, 1.1, 2, 0, Size(30, 30));
//	for (size_t t = 0; t < faces.size(); t++) {
//		rectangle(src, faces[t], Scalar(0, 0, 255), 2, 8, 0);
//	}
//
//	imshow("output", src);
//	waitKey(0);
//	return 0;
//}