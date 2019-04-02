#include<iostream>
#include<opencv2/opencv.hpp>

using namespace cv;
using namespace std;
/*
Mat src, gray_src, dst;
int threshold_value = 140;
int max_level = 255;
const char* output = "output";
void FindROI(int, void*);
int main() {
	src = imread("D:/AI/opencv_learning/ÇÐ±ß.png");
	if (src.empty()) {
		printf("could not load");
		return -1;
	}
	namedWindow("input", CV_WINDOW_AUTOSIZE);
	imshow("input", src);
	namedWindow(output, CV_WINDOW_AUTOSIZE);

	createTrackbar("demo", output, &threshold_value, max_level, FindROI);
	FindROI(0, 0);

	waitKey(0);
	return 0;
}
void FindROI(int, void*) {
	cvtColor(src, gray_src, COLOR_BGR2GRAY);
	Mat canny_output;
	Canny(gray_src, canny_output, threshold_value, threshold_value * 2, 3, false);

	vector<vector<Point>> contours;
	vector<Vec4i> hireachy;
	findContours(canny_output, contours, hireachy, RETR_TREE, CHAIN_APPROX_SIMPLE, Point(0, 0));

	int minw = src.cols*0.25;
	int minh = src.rows*0.25;
	RNG rng(12345);
	Rect bbox;
	Mat result = Mat::zeros(src.size(), CV_8UC3);
	for (size_t t = 0; t < contours.size(); t ++ ) {
		RotatedRect minrect = minAreaRect(contours[t]);
		float degree = abs(minrect.angle);
		printf("%f\n", degree);
		if (minrect.size.width > minw&&minrect.size.height > minh&&minrect.size.width < (src.cols - 5)) {
			Point2f pts[4];
			minrect.points(pts);

			bbox = minrect.boundingRect();

			Scalar color = Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255));
			for (int i = 0; i < 4; i ++ ) {
				line(result, pts[i], pts[(i + 1) % 4], color, 2, 8, 0);
			}
		}
	}
	imshow(output,result);

	if (bbox.width > 0 && bbox.height > 0) {
		Mat roiImg = src(bbox);
		imshow("outputimg", roiImg);
	}
}
*/