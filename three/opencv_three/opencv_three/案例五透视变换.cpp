#include<iostream>
#include<opencv2/opencv.hpp>
#include<math.h>
using namespace cv;
using namespace std;
/*
int main() {
	Mat src = imread("D:/AI/opencv_learning/͸�ӱ任.png");
	if (src.empty()) {
		return -1;
	}
	namedWindow("input", CV_WINDOW_AUTOSIZE);
	imshow("input", src);

	Mat gray_src, binary, dst;
	cvtColor(src, gray_src, COLOR_BGR2GRAY);
	threshold(gray_src, binary, 0, 255, THRESH_BINARY_INV | THRESH_OTSU);
	imshow("binary", binary);

	Mat kernel = getStructuringElement(MORPH_RECT, Size(5,5), Point(-1, -1));
	morphologyEx(binary, dst, MORPH_CLOSE, kernel, Point(-1, -1), 2);
	imshow("morpg", dst);

	bitwise_not(dst, dst, Mat());
	vector<vector<Point>> contours;
	vector<Vec4i> hireahy;
	findContours(dst, contours, hireahy, CV_RETR_TREE, CHAIN_APPROX_SIMPLE, Point());

	int wdith = src.cols;
	int height = src.rows;
	Mat drawImg = Mat::zeros(src.size(), CV_8UC3);
	for (size_t t = 0; t < contours.size(); t++) {
		Rect rect = boundingRect(contours[t]);
		if (rect.width > wdith / 2 && rect.width < wdith - 5) {
			drawContours(drawImg, contours, static_cast<int>(t), Scalar(0, 0, 255), 2, 8, hireahy, 0, Point());
		}
	}
	imshow("cont", drawImg);

	vector<Vec4i> lines;
	Mat contoursImg;
	int accu = min(wdith*0.5, height*0.5);
	cvtColor(drawImg, contoursImg, COLOR_BGR2GRAY);
	HoughLinesP(contoursImg, lines, 1, CV_PI / 180.0, accu, 0);
	Mat linesImg = Mat::zeros(src.size(), CV_8UC3);
	for (size_t t = 0; t < lines.size(); t++) {
		Vec4i ln = lines[t];
		line(linesImg, Point(ln[0], ln[1]), Point(ln[2], ln[3]), Scalar(0, 0, 255), 2, 8, 0);
	}
	printf("%d\n", lines.size());
	imshow("line", linesImg);

	int delta = 0;
	Vec4i topLine, bottomLine, leftLine, rightLine;
	for (int i = 0; i < lines.size(); i++) {
		Vec4i ln = lines[i];
		delta = abs(ln[3] - ln[1]);
		if (ln[3] < height / 2.0&&ln[1] < height / 2.0&&delta < accu - 1) {
			if (topLine[3] > ln[3] && topLine[3] > 0) {
				topLine = lines[i];
			}
			else
			{
				topLine = lines[i];
			}
		}
		if (ln[3] > height / 2.0&&ln[1] > height / 2.0&&delta < accu - 1) {
			//bottomLine = lines[i];
			if (bottomLine[3] > ln[3] && bottomLine[3] > 0) {
				bottomLine = lines[i];
			}
			else
			{
				bottomLine = lines[i];
			}
		}
		if (ln[0] < wdith / 2.0&&ln[2] < wdith / 2.0) {
			//leftLine = lines[i];
			if (leftLine[3] > ln[3] && leftLine[3] > 0) {
				leftLine = lines[i];
			}
			else
			{
				leftLine = lines[i];
			}
		}
		if (ln[0] > wdith / 2.0&&ln[2] > wdith / 2.0) {
			//rightLine = lines[i];
			if (rightLine[3] > ln[3] && rightLine[3] > 0) {
				rightLine = lines[i];
			}
			else
			{
				rightLine = lines[i];
			}
		}
	}
	cout << "top" << topLine[0] << "," << topLine[1] << "..." << topLine[2] << "," << topLine[3] << endl;
	cout << "bottom" << bottomLine[0] << "," << bottomLine[1] << "..." << bottomLine[2] << "," << bottomLine[3] << endl;
	cout << "left" << leftLine[0] << "," << leftLine[1] << "..." << leftLine[2] << "," << leftLine[3] << endl;
	cout << "right" << rightLine[0] << "," << rightLine[1] << "..." << rightLine[2] << "," << rightLine[3] << endl;

	float k1, c1;
	k1 = float((topLine[3] - topLine[1])) / float((topLine[2] - topLine[0]));
	c1 = topLine[1] - k1 * topLine[0];
	float k2, c2;
	k2 = float((bottomLine[3] - bottomLine[1])) / float((bottomLine[2] - bottomLine[0]));
	c2 = bottomLine[1] - k2 * bottomLine[0];
	float k3, c3;
	k3 = float((leftLine[3] - leftLine[1])) / float((leftLine[2] - leftLine[0]));
	c3 = leftLine[1] - k3 * leftLine[0];
	float k4, c4;
	k4 = float((rightLine[3] - rightLine[1])) / float((rightLine[2] - rightLine[0]));
	c4 = rightLine[1] - k4 * rightLine[0];

	Point p1;
	p1.x = static_cast<int>((c1 - c3) / (k3 - k1));
	p1.y = static_cast<int> (k1*p1.x + c1);

	Point p2;
	p2.x = static_cast<int>((c1 - c4) / (k4 - k1));
	p2.y = static_cast<int> (k1*p2.x + c1);

	Point p3;
	p3.x = static_cast<int>((c2 - c3) / (k3 - k2));
	p3.y = static_cast<int> (k2*p3.x + c2);

	Point p4;
	p4.x = static_cast<int>((c2 - c4) / (k4 - k2));
	p4.y = static_cast<int> (k2*p4.x + c2);

	cout << p1.x << "," << p1.y << endl;
	cout << p2.x << "," << p2.y << endl;
	cout << p3.x << "," << p3.y << endl;
	cout << p4.x << "," << p4.y << endl;

	circle(linesImg, p1, 2, Scalar(255, 0, 0), 2, 8, 0);
	circle(linesImg, p2, 2, Scalar(255, 0, 0), 2, 8, 0);
	circle(linesImg, p3, 2, Scalar(255, 0, 0), 2, 8, 0);
	circle(linesImg, p4, 2, Scalar(255, 0, 0), 2, 8, 0);
	imshow("corner", linesImg);

	vector<Point2f> src_corners(4);
	src_corners[0] = p1;
	src_corners[1] = p2;
	src_corners[2] = p4;
	src_corners[3] = p3;

	vector<Point2f> dst_corners(4);
	dst_corners[0] = Point(0, 0);
	dst_corners[1] = Point(wdith, 0);
	dst_corners[2] = Point(0, height);
	dst_corners[3] = Point(wdith, height);

	Mat resultImg;
	Mat warpmatrix = getPerspectiveTransform(src_corners, dst_corners);
	warpPerspective(src, resultImg, warpmatrix, resultImg.size(), INTER_LINEAR);
	imshow("result", resultImg);

	waitKey(0);
	return 0;
}
*/