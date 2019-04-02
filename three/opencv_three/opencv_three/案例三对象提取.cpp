#include<iostream>
#include<opencv2/opencv.hpp>
#include<math.h>
using namespace cv;
using namespace std;
/*
Mat src, binary, dst;
int main() {
	src = imread("D:/AI/opencv_learning/对象提取.png", IMREAD_GRAYSCALE);
	if (!src.data) {
		return -1;
	}
	namedWindow("input", CV_WINDOW_AUTOSIZE);
	imshow("input", src);

	threshold(src, binary, 0, 255, THRESH_BINARY | THRESH_OTSU);
	//imshow("output", binary);

	Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5), Point(-1, -1));
	morphologyEx(binary, dst, MORPH_CLOSE, kernel, Point(-1, -1));

	kernel = getStructuringElement(MORPH_RECT, Size(5, 5), Point(-1, -1));
	morphologyEx(dst, dst, MORPH_OPEN, kernel, Point(-1, -1));
	//imshow("output", dst);

	vector<vector<Point>> contours;
	vector<Vec4i> hireachy;
	findContours(dst, contours, hireachy, RETR_TREE, CHAIN_APPROX_SIMPLE, Point());

	Mat resultImg = Mat::zeros(src.size(), CV_8UC3);
	//Mat resultImg = src.clone();
	//cvtColor(resultImg, resultImg, COLOR_GRAY2BGR);
	for (size_t t = 0; t < contours.size(); t++) {
		double area = contourArea(contours[t]);
		if (area < 500) 
			continue;
		Rect rect = boundingRect(contours[t]);
		float ratio = float(rect.width) / float(rect.height);
		if (ratio<1.1&&ratio>0.9) {
			drawContours(resultImg, contours, t, Scalar(0, 0, 255), 2, 8, Mat(), 0, Point());
			printf("area:%f\n", area);
			printf("length:%f\n", arcLength(contours[t], true));
			int x = rect.x + rect.width / 2;
			int y = rect.y + rect.height / 2;
			circle(resultImg, Point(x, y), 2, Scalar(0, 0, 255), 2, 8, 0);
		}
	}
	imshow("output", resultImg);

	//vector<Vec3f> mycircles;
	//cvtColor(resultImg, resultImg, COLOR_BGR2GRAY);
	//HoughCircles(resultImg, mycircles, HOUGH_GRADIENT,1,10);

	//Mat circleImg = src.clone();
	//cvtColor(circleImg, circleImg, COLOR_GRAY2BGR);
	//for (int i = 0; i < mycircles.size(); i++) {
	//	Vec3f circleInfo = mycircles[i];
	//	circle(circleImg, Point(circleInfo[0], circleInfo[1]), circleInfo[2], Scalar(0, 0, 255), 2, 8, 0);
	//}
	//imshow("output1", circleImg);
	waitKey(0);
	return 0;
}
*/