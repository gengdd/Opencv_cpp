#include<iostream>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;
/*
Rect roi;
void processFrame(Mat &binary, Rect &rect);
int main() {
	VideoCapture capture;
	capture.open("D:/AI/opencv_learning/video_006.mp4");
	if (!capture.isOpened()) {
		printf("not load");
		return -1;
	}
	Mat frame, mask;
	Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3), Point(-1, -1));
	Mat kernel2 = getStructuringElement(MORPH_RECT, Size(5, 5), Point(-1, -1));
	namedWindow("input", CV_WINDOW_AUTOSIZE);
	while (capture.read(frame)) {

		inRange(frame, Scalar(0, 127, 0), Scalar(120, 255, 120), mask);
		morphologyEx(mask, mask, MORPH_OPEN, kernel, Point(-1, -1), 1);
		dilate(mask, mask, kernel2, Point(-1, -1), 4);
		imshow("demo", mask);

		processFrame(mask, roi);
		rectangle(frame, roi, Scalar(0, 0, 255), 3, 8, 0);

		imshow("input", frame);
		char c = waitKey(50);
		if (c == 27) {
			break;
		}
	}

	capture.release();
	waitKey(0);
	return 0;
}
void processFrame(Mat &binary, Rect &rect) {
	vector<vector<Point>> contours;
	vector<Vec4i> hireachy;
	findContours(binary, contours, hireachy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE, Point(0, 0));
	if (contours.size() > 0) {
		double maxArea = 0.0;
		for (size_t t = 0; t < contours.size(); t++) {
			double area = contourArea(contours[t]);
			if (area > maxArea) {
				maxArea = area;
				rect = boundingRect(contours[t]);
			}
		}
	}
	else {
		rect.x = rect.y = rect.width = rect.height = 0;
	}
}
*/