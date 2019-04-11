#include<iostream>
#include<opencv2/opencv.hpp>
#include<opencv2/tracking.hpp>
#include<math.h>

using namespace std;
using namespace cv;

int main() {
	VideoCapture capture;
	capture.open("D:/AI/opencv_learning/video_003.avi");
	if (!capture.isOpened()) {
		printf("could not load");
		return -1;
	}

	Mat frame;

	capture.release();
	waitKey(0);
	return 0;
}