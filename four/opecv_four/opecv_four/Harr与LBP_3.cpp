#include<iostream>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;
/*
String haarfile= "D:/Download/IDM/opencv3.4/opencv/new build/install/etc/haarcascades/haarcascade_frontalface_alt.xml";
String lbpfile = "D:/Download/IDM/opencv3.4/opencv/new build/install/etc/lbpcascades/lbpcascade_frontalface.xml";
CascadeClassifier face_cascader;

int main() {
	if (!face_cascader.load(haarfile)) {
		return -1;
	}
	VideoCapture capture;
	capture.open("D:/AI/opencv_learning/test.mp4");
	Mat frame;
	Mat gray;
	vector<Rect> face;
	while (capture.read(frame)) {
		cvtColor(frame, gray, COLOR_BGR2GRAY);
		equalizeHist(gray, gray);
		face_cascader.detectMultiScale(gray, face, 1.2, 3, 0, Size(30, 30));
		for (size_t t = 0; t < face.size(); t++) {
			rectangle(frame, face[t], Scalar(0, 0, 255), 2, 8, 0);
		}
		imshow("demo", frame);
		char c = waitKey(50);
		if (c == 27) {
			break;
		}
	}
	capture.release();
	waitKey(0);
	return 0;
}
*/
//LBP 速度较快
//Haar 准确