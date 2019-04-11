#include<iostream>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;
/*
void drawOpticalFlowHF(Mat &flowdata, Mat &image, int step);
int main() {
	VideoCapture capture;
	capture.open("D:/AI/opencv_learning/video_003.avi");
	if (!capture.isOpened()) {
		printf("could not load");
		return -1;
	}

	Mat frame, gray;
	Mat prev_frame, prev_gray;
	Mat flowResult, flowdata;
	capture.read(frame);
	cvtColor(frame, prev_gray, COLOR_BGR2GRAY);

	namedWindow("demo", CV_WINDOW_AUTOSIZE);
	while (capture.read(frame)) {
		cvtColor(frame, gray, COLOR_BGR2GRAY);
		if (!prev_gray.empty()) {
			calcOpticalFlowFarneback(prev_gray, gray, flowdata, 0.5, 3, 15, 3, 5, 1.2,0);
			cvtColor(prev_gray, flowResult, COLOR_GRAY2BGR);
			drawOpticalFlowHF(flowdata, flowResult, 1);
			imshow("demo", frame);
			imshow("flow", flowResult);
		}
		char c = waitKey(20);
		if (c == 27) {
			break;
		}
	}
	waitKey(0);
	return 0;
}
void drawOpticalFlowHF(Mat &flowdata, Mat &image, int step) {
	for (int row = 0; row < image.rows; row++) {
		for (int col = 0; col < image.cols; col++) {
			const Point2f fxy = flowdata.at<Point2f>(row, col);
			if (fxy.x > 2 || fxy.y > 2) {
				line(image, Point(col, row), Point(col + fxy.x, row + fxy.y), Scalar(0, 255, 0), 2, 8, 0);
				circle(image, Point(col, row), 2, Scalar(0, 0, 255), -1);
			}
		}
	}
}
*/