#include<iostream>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;

/*
String fileName = "D:/Download/IDM/opencv3.4/opencv/new build/install/etc/haarcascades/haarcascade_frontalface_alt.xml";
String eye_fileName = "D:/Download/IDM/opencv3.4/opencv/new build/install/etc/haarcascades/haarcascade_eye.xml";
CascadeClassifier face_classifier;
CascadeClassifier eye_classifier;

int main() {
	if (!face_classifier.load(fileName)) {
		return -1;
	}
	if (!eye_classifier.load(eye_fileName)) {
		return -1;
	}
	namedWindow("camera", CV_WINDOW_AUTOSIZE);

	VideoCapture capture(0);
	Mat frame;
	Mat gray;
	vector<Rect> face;
	vector<Rect> eye;
	while (capture.read(frame)) {
		imshow("camera", frame);
		cvtColor(frame, gray, COLOR_BGR2GRAY);
		equalizeHist(gray, gray);
		face_classifier.detectMultiScale(gray, face, 1.2, 3, 0, Size(30, 30));
		for (size_t t = 0; t < face.size(); t++) {
			Rect roi;
			roi.x = face[t].x;
			roi.y = face[t].y;
			roi.width = face[t].width;
			roi.height = face[t].height / 2;
			Mat faceROI = frame(roi);
			eye_classifier.detectMultiScale(faceROI, eye, 1.2, 3, 0, Size(20, 20));
			for (size_t k = 0; k < eye.size(); k++) {
				Rect rect;
				rect.x = face[t].x + eye[k].x;
				rect.y = face[t].y + eye[k].y;
				rect.width = eye[k].width;
				rect.height = eye[k].height;
				rectangle(frame, rect, Scalar(0, 0, 255), 2, 8, 0);
			}
			rectangle(frame, face[t], Scalar(0, 0, 255), 2, 8, 0);
		}
		imshow("camera", frame);
		char c = waitKey(30);
		if (c == 27) {
			break;
		}
	}

	waitKey(0);
	return 0;
}
*/