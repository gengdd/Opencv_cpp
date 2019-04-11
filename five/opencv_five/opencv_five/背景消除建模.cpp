#include<iostream>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;
/*
int main() {
	VideoCapture capture;
	capture.open("D:/AI/opencv_learning/video_004.avi");
	if (!capture.isOpened()) {
		printf("could not load");
		return -1;
	}
	
	Mat frame;
	Mat bsmaskMOG2, bsmaskKNN;
	namedWindow("input", CV_WINDOW_AUTOSIZE);
	namedWindow("demo", CV_WINDOW_AUTOSIZE);
	namedWindow("demo1", CV_WINDOW_AUTOSIZE);

	Ptr<BackgroundSubtractor> pMOG2 = createBackgroundSubtractorMOG2();
	Ptr<BackgroundSubtractor> pKNN = createBackgroundSubtractorKNN();

	Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3), Point(-1, -1));

	while (capture.read(frame)) {
		imshow("input", frame);
		pMOG2->apply(frame, bsmaskMOG2);
		morphologyEx(bsmaskMOG2, bsmaskMOG2, MORPH_OPEN, kernel, Point(-1, -1));
		pKNN->apply(frame, bsmaskKNN);
		imshow("demo", bsmaskMOG2);
		imshow("demo1", bsmaskKNN);
		char c = waitKey(20);
		if (c == 27) {
			break;
		}
	}

	waitKey(0);
	return 0;
}
*/