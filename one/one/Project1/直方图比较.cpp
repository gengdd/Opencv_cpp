#include<opencv2/opencv.hpp>
#include<iostream>
#include<math.h>

using namespace std;
using namespace cv;
/*
string convertTostring(double d);
int main() {
	Mat src, src_gray, dst;
	src = imread("D:/AI/opencv_learning/test.jpg");
	if (!src.data) {
		printf("could not load");
		return -1;
	}

	char input[] = "input";
	char ouput[] = "output";
	namedWindow(input, CV_WINDOW_AUTOSIZE);
	namedWindow(ouput, CV_WINDOW_AUTOSIZE);
	imshow(input, src);

	cvtColor(src, src, CV_BGR2HSV);

	int h_bins = 50, s_bins = 60;
	int hitSize[] = { h_bins,s_bins };
	float h_ranges[] = { 0,180 };
	float s_ranges[] = { 0,256 };
	const float* ranges[] = { h_ranges,s_ranges };
	int channels[] = { 0,1 };

	MatND hist_base;

	calcHist(&src, 1, channels, Mat(), hist_base, 2, hitSize, ranges, true, false);
	normalize(hist_base, hist_base, 0, 1, NORM_MINMAX, -1, Mat());

	double basebase = compareHist(hist_base, hist_base, CV_COMP_CORREL);
	printf("%f", basebase);

	putText(src, convertTostring(basebase), Point(50, 50), CV_FONT_HERSHEY_SCRIPT_COMPLEX, 1, Scalar(0, 0, 255), 2, LINE_AA);

	imshow(ouput,src);

	waitKey(0);
	return 0;
}
string convertTostring(double d) {
	ostringstream os;
	if (os << d) {
		return os.str();
	}
	return "could not";
}
*/
//直方图比较
//归一化到相同的尺度空间
//correlation  chi_square  intersection  巴氏距离
//BGR->HSV
//calcHist->normalize
//comareHist
