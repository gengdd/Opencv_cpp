#include<opencv2/opencv.hpp>
#include<iostream>
#include<math.h>

using namespace std;
using namespace cv;
/*
Mat src, temp, dst;
int match_method = CV_TM_SQDIFF;
int max_track = 5;
const char* input = "input";
const char* output = "output";
const char* match_t = "tm_demo";
void Match_Demo(int, void*);
int main() {
	src = imread("D:/AI/opencv_learning/test.jpg");
	temp = imread("D:/AI/opencv_learning/test1.jpg");
	if (!src.data) {
		printf("could not load");
		return -1;
	}
	namedWindow(input, CV_WINDOW_AUTOSIZE);
	namedWindow(output, CV_WINDOW_AUTOSIZE);
	namedWindow(match_t, CV_WINDOW_AUTOSIZE);
	imshow(input, temp);

	createTrackbar("match", output, &match_method, max_track, Match_Demo);
	Match_Demo(0, 0);

	waitKey(0);
	return 0;
}
void Match_Demo(int, void*) {
	int width = src.cols - temp.cols + 1;
	int height = src.rows - temp.rows + 1;
	Mat result(width,height,CV_32FC1);

	matchTemplate(src, temp, result, match_method, Mat());
	normalize(result, result, 0, 1, NORM_MINMAX, -1, Mat());
	       
	Point minloc;
	Point maxloc;
	double min, max;
	src.copyTo(dst);
	Point temloc;

	minMaxLoc(result, &min, &max, &minloc, &maxloc, Mat());
	if (match_method == CV_TM_SQDIFF || match_method == CV_TM_SQDIFF_NORMED) {
		temloc = minloc;
	}
	else{
		temloc = maxloc;
	}

	rectangle(dst, Rect(temloc.x, temloc.y, temp.cols, temp.rows), Scalar(0, 0, 255), 2, 8);
	rectangle(result, Rect(temloc.x, temloc.y, temp.cols, temp.rows), Scalar(0, 0, 255), 2, 8);

	imshow(output, result);
	imshow(match_t, dst);
}
*/
//