#include<iostream>
#include<opencv2/opencv.hpp>

using namespace cv;
using namespace std;
/*
int max_count = 255;
int threshold_value = 100;
const char* output = "output";
Mat src, roiImg, dst;
void detectLines(int, void*);
void morhpologyLines(int, void*);
int main() {
	src = imread("D:/AI/opencv_learning/÷±œﬂºÏ≤‚.png", IMREAD_GRAYSCALE);
	if (src.empty()) {
		return -1;
	}
	namedWindow("input", CV_WINDOW_AUTOSIZE);
	namedWindow(output, CV_WINDOW_AUTOSIZE);
	imshow("input", src);

	Rect roi = Rect(5, 5, src.cols - 5, src.rows - 5); //–°ºÙ«–
	roiImg = src(roi);

	//createTrackbar("demo", output, &threshold_value, max_count, detectLines);
	//detectLines(0, 0);
	morhpologyLines(0, 0);

	waitKey(0);
	return 0;
}

void morhpologyLines(int, void*) {
	Mat binaryImage, morhpImg;
	threshold(roiImg, binaryImage, 0, 255, THRESH_BINARY_INV | THRESH_OTSU);

	Mat kernel = getStructuringElement(MORPH_RECT, Size(30, 1), Point(-1, -1));
	morphologyEx(binaryImage, morhpImg, MORPH_OPEN, kernel, Point(-1, -1));

	kernel = getStructuringElement(MORPH_RECT, Size(3, 3), Point(-1, -1));
	dilate(morhpImg, morhpImg, kernel);

	vector<Vec4i> lines;
	HoughLinesP(morhpImg, lines, 1, CV_PI / 180.0, 30, 20.0, 0);
	Mat resultImg = roiImg.clone();
	cvtColor(resultImg, resultImg, COLOR_GRAY2BGR);
	for (size_t t = 0; t < lines.size(); t++) {
		Vec4i ln = lines[t];
		line(resultImg, Point(ln[0], ln[1]), Point(ln[2], ln[3]), Scalar(0, 0, 255), 2, 8, 0);
	}

	imshow(output,resultImg);
}

void detectLines(int, void*) {
	Canny(roiImg, dst, threshold_value, threshold_value * 2, 3, false);
	//threshold(roiImg, dst, 0, 255, THRESH_BINARY | THRESH_OTSU);
	vector<Vec4i> lines;
	HoughLinesP(dst, lines, 1, CV_PI / 180.0, 30.0, 0);
	cvtColor(dst, dst, COLOR_GRAY2BGR);
	for (size_t t = 0; t < lines.size(); t++) {
		Vec4i ln = lines[t];
		line(dst, Point(ln[0], ln[1]), Point(ln[2], ln[3]), Scalar(0, 0, 255), 2, 8, 0);
	}
	imshow(output, dst);
}
*/

