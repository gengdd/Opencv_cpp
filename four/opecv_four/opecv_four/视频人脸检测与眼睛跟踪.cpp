#include<iostream>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;
/*
String facefile = "D:/Download/IDM/opencv3.4/opencv/new build/install/etc/haarcascades/haarcascade_frontalface_alt.xml";
String lefteyefile = "D:/Download/IDM/opencv3.4/opencv/new build/install/etc/haarcascades/haarcascade_eye.xml";
String righteyefile = "D:/Download/IDM/opencv3.4/opencv/new build/install/etc/haarcascades/haarcascade_eye.xml";
CascadeClassifier face_detector;
CascadeClassifier lefteye_detector;
CascadeClassifier righteye_detector;

Rect leftEYE, rightEYE;
void trackEye(Mat& im, Mat& tpl, Rect& rect);
int main() {
	face_detector.load(facefile);
	lefteye_detector.load(lefteyefile);
	righteye_detector.load(righteyefile);

	Mat frame;
	//VideoCapture capture(0);
	VideoCapture capture;
	capture.open("D:/AI/opencv_learning/test.mp4");
	namedWindow("demo", CV_WINDOW_AUTOSIZE);

	Mat gray;
	vector<Rect> faces;
	vector<Rect> lefteye;
	vector<Rect> righteye;
	Mat leftpl,rightpl;
	while (capture.read(frame)) {
		flip(frame, frame, 1);
		cvtColor(frame, gray, COLOR_BGR2GRAY);
		equalizeHist(gray, gray);
		face_detector.detectMultiScale(gray, faces, 1.1, 3, 0, Size(30, 30));
		for (size_t t = 0; t < faces.size(); ++t) {
			rectangle(frame, faces[t], Scalar(255, 0, 0), 2, 8, 0);

			int offsety = faces[t].height / 4;
			int offsetx = faces[t].width / 8;
			int eyeheight = faces[t].height / 2 - offsety;
			int eyewidth = faces[t].width / 2 - offsetx;

			Rect leftRect;
			leftRect.x = faces[t].x + offsetx;
			leftRect.y = faces[t].y + offsety;
			leftRect.height = eyeheight;
			leftRect.width = eyewidth;
			Mat leftRoi = gray(leftRect);

			lefteye_detector.detectMultiScale(leftRoi, lefteye, 1.1, 1, 0, Size(20, 20));
			if (leftpl.empty()) {
				if (lefteye.size()) {
					leftRect = lefteye[0] + Point(leftRect.x, leftRect.y);
					leftpl = gray(leftRect);
					rectangle(frame, leftRect, Scalar(0, 0, 255), 2, 8, 0);
				}
			}
			else {
				leftEYE.x = leftRect.x;
				leftEYE.y = leftRect.y;
				trackEye(leftRoi, leftpl, leftEYE);
				if (leftEYE.x > 0 && leftEYE.y > 0) {
					leftEYE.width = leftpl.cols;
					leftEYE.height = leftpl.rows;
				}
			}
		}
		imshow("demo", frame);
		char c = waitKey(5);
		if (c == 27) {
			break;
		}
	}

	capture.release();
	waitKey(0);
	return 0;
}
void trackEye(Mat& im, Mat& tpl, Rect& rect) {
	Mat result;
	int result_cols = im.cols - tpl.cols + 1;
	int result_rows = im.rows - tpl.rows + 1;
	result.create(result_rows, result_cols, CV_32FC1);
	matchTemplate(im, tpl, result, TM_CCORR_NORMED);

	double minval, maxval;
	Point minloc, maxloc;
	minMaxLoc(result, &minval, &maxval, &minloc, &maxloc);
	if (maxval > 0.75) {
		rect.x = rect.x + maxloc.x;
		rect.y = rect.y + maxloc.y;
	}
	else
	{
		printf("error");
	}
}
*/