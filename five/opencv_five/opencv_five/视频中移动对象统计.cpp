#include<iostream>
#include<opencv2/opencv.hpp>
#include<opencv2/tracking.hpp>
#include<math.h>

using namespace std;
using namespace cv;
/*
int main() {
	VideoCapture capture;
	capture.open("D:/AI/opencv_learning/video_003.avi");
	if (!capture.isOpened()) {
		printf("could not load");
		return -1;
	}

	Ptr<BackgroundSubtractor> pMOG2 = createBackgroundSubtractorMOG2();
	Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3), Point(-1, -1));
	Mat frame, gray, mogMask;
	vector<vector<Point>> contours;
	vector<Vec4i> hireachy;
	int count = 0;
	char numText[8];
	while (capture.read(frame)) {
		imshow("input", frame);
		pMOG2->apply(frame, mogMask);
		threshold(mogMask, mogMask, 100, 255, THRESH_BINARY);
		morphologyEx(mogMask, mogMask, MORPH_OPEN, kernel, Point(-1, -1));

		findContours(mogMask, contours, hireachy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE, Point(0, 0));
		for (size_t t = 0; t < contours.size(); t++) {
			double area = contourArea(contours[t]);
			if (area < 1000) continue;
			Rect selection = boundingRect(contours[t]);
			if (selection.width < 30 || selection.height < 30)continue;
			count++;
			rectangle(frame, selection, Scalar(0, 0, 255), 2, 8);

			sprintf(numText, "%d", count);
			putText(frame, numText, Point(selection.x, selection.y), CV_FONT_NORMAL, FONT_HERSHEY_PLAIN, Scalar(0,255,0), 1, 8);
		}
		imshow("output", frame);
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

