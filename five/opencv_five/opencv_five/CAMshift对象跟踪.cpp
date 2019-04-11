#include<iostream>
#include<opencv2/opencv.hpp>
#include<opencv2/tracking.hpp>
#include<math.h>

using namespace std;
using namespace cv;
/*
int smin = 15;
int vmin = 40;
int vmax = 256;
int bins = 16;
int main() {
	//Mat src = imread("D:/AI/opencv_learning/test.jpg");
	//imshow("input", src);
	VideoCapture capture;
	capture.open("D:/AI/opencv_learning/video_003.avi");
	if (!capture.isOpened()) {
		printf("could not load");
		return -1;
	}

	bool firstRead = true;
	float hrange[] = { 0,180 };
	const float* hranges = hrange;
	Rect selection;
	Mat frame, hsv, hue, mask, hist, backproject;
	Mat drawImg = Mat::zeros(300, 300, CV_8UC3);
	while (capture.read(frame)) {
		if (firstRead) {
			Rect2d first = selectROI("input", frame);
			selection.x = first.x;
			selection.y = first.y;
			selection.width = first.width;
			selection.height = first.height;
			printf("ROI.x=%d,ROI.y=%d", selection.x, selection.y);
		}

		cvtColor(frame, hsv, COLOR_BGR2HSV);
		inRange(hsv, Scalar(0, smin, vmin), Scalar(180, vmax, vmax), mask);
		hue = Mat(hsv.size(), hsv.depth());
		int channels[] = { 0,0 };
		mixChannels(&hsv, 1, &hue, 1, channels, 1);

		if (firstRead){
			Mat roi(hue, selection);
			Mat maskroi(mask, selection);
			calcHist(&roi, 1, 0, maskroi, hist, 1, &bins, &hranges);
			normalize(hist, hist, 0, 255, NORM_MINMAX);

			int binw = drawImg.cols / bins;
			Mat colorIndex = Mat(1, bins, CV_8UC3);
			for (int i = 0; i < bins; i++) {
				colorIndex.at<Vec3b>(0, i) = Vec3b(saturate_cast<uchar>(i * 180 / bins), 255, 255);
			}
			cvtColor(colorIndex, colorIndex, COLOR_HSV2BGR);
			for (int i = 0; i < bins; i++) {
				int val = saturate_cast<int>(hist.at<float>(i)*drawImg.rows / 255);
				rectangle(drawImg, Point(i*binw, drawImg.rows), Point((i + 1)*binw, drawImg.rows - val), Scalar(colorIndex.at<Vec3b>(0, i)), -1, 8, 0);
			}
		}

		calcBackProject(&hue, 1, 0, hist, backproject, &hranges);
		backproject &= mask;
		RotatedRect tackBox = CamShift(backproject, selection, TermCriteria((TermCriteria::COUNT | TermCriteria::EPS), 10, 1));

		ellipse(frame, tackBox, Scalar(0, 0, 255), 3, 8);

		if (firstRead) {
			firstRead = false;
		}
		imshow("input", frame);
		imshow("output", drawImg);
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