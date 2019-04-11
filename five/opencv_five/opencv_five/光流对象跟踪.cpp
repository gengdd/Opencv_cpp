#include<iostream>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;
/*
Mat frame,gray;
Mat prev_frame, prev_gray;

vector<Point2f> features;
vector<Point2f> iniPoints;
vector<Point2f> fpts[2];

vector<uchar> status;
vector<float> errors; 

void detectFeatures(Mat &inFrame, Mat &ingray);
void drawFeature(Mat &inFrame);
void klTrackFeature();
void drawTrackLines();
int main() {
	VideoCapture capture;
	capture.open("D:/AI/opencv_learning/bike.avi");
	if (!capture.isOpened()) {
		printf("could not load");
		return -1;
	}


	namedWindow("input", CV_WINDOW_AUTOSIZE);
	while (capture.read(frame)) {
		cvtColor(frame, gray, COLOR_BGR2GRAY);
		//detectFeatures(frame, gray);
		//drawFeature(frame);

		if (fpts[0].size() < 40) {
			detectFeatures(frame, gray);
			fpts[0].insert(fpts[0].end(), features.begin(), features.end());
			iniPoints.insert(iniPoints.end(), features.begin(), features.end());
		}
		else {
			printf("ddd");
		}

		if (prev_gray.empty()) {
			gray.copyTo(prev_gray);
		}
		klTrackFeature();
		drawFeature(frame);

		gray.copyTo(prev_gray);
		frame.copyTo(prev_frame);

		imshow("input", frame);
		char c = waitKey(50);
		if (c == 27) {
			break;
		}
	}

	waitKey(0);
	return 0;
}

void detectFeatures(Mat &inFrame, Mat &ingray) {
	double maxCorners = 5000;
	double qulitylevel = 0.01;
	double minDis = 10;
	double blockSize = 3;
	double k = 0.04;
	goodFeaturesToTrack(ingray, features, maxCorners, qulitylevel, minDis, Mat(), blockSize, false, k);
	cout << "ttt" << endl;
}

void drawFeature(Mat &inFrame) {
	for (size_t t = 0; t < fpts[0].size(); t++) {
		circle(inFrame, fpts[0][t], 2, Scalar(0, 0, 255), 2, 8, 0);
	}
}

void klTrackFeature() {
	calcOpticalFlowPyrLK(prev_gray, gray, fpts[0], fpts[1], status, errors);
	int k = 0;

	for (int i = 0; i < fpts[1].size(); i++) {
		double dist = abs(fpts[0][i].x - fpts[1][i].x) + abs(fpts[0][i].y - fpts[0][i].y);
		if (dist > 2 && status[i]) {
			iniPoints[k] = iniPoints[i];
			fpts[1][k++] = fpts[1][i];
		}
	}

	iniPoints.resize(k);
	fpts[1].resize(k);
	drawTrackLines();
	std::swap(fpts[1], fpts[0]);
}

void drawTrackLines() {
	for (size_t t = 0; t < fpts[1].size(); t++) {
		line(frame, iniPoints[t], fpts[1][t], Scalar(0, 255, 0), 2, 8, 0);
		circle(frame, fpts[1][t], 2, Scalar(0, 0, 255), 2, 8, 0);
	}
}
*/