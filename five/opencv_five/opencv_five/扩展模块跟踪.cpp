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

	MultiTracker trackers("KCF");
	vector<Rect2d> objects;

	Mat frame, gray;
	capture.read(frame);
	selectROI("input", frame, objects);
	if (objects.size() <= 0) {
		return -1;
	}
	trackers.add(frame, objects);
	while (capture.read(frame)) {
		trackers.update(frame);
		for (size_t t = 0; t < trackers.getObjects[t]; t++) {
			rectangle(frame, trackers.objects[t], Scalar(0, 0, 255), 2, 8, 0);
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