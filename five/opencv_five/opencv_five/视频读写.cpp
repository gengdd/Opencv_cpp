#include<iostream>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;
/*
int main() {
	VideoCapture capture(0);
	capture.open("D:/AI/opencv_learning/video_004.avi");
	if (!capture.isOpened()) {
		printf("could not load");
		return -1;
	}
	//double fps = capture.get(CV_CAP_PROP_FPS);
	//Size size = Size(capture.get(CV_CAP_PROP_FRAME_WIDTH), capture.get(CV_CAP_PROP_FRAME_HEIGHT));
	//printf("%f",fps);
	//VideoWriter writer("D:/AI/opencv_learning/wv_video_004.avi", -1, 15, size, true);


	Mat frame, gray, binary;
	namedWindow("demo", CV_WINDOW_AUTOSIZE);
	while (capture.read(frame)) {
		cvtColor(frame, gray, COLOR_BGR2GRAY);
		threshold(gray, binary, 0, 255, THRESH_BINARY | THRESH_OTSU);
		//imshow("demo", frame);
		//writer.write(frame);
		imshow("demo", binary);
		char c = waitKey(20);
		if (c == 27) {
			break;
		}
	}
	waitKey(0);
	return 0;
}
*/
