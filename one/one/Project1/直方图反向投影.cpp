#include<opencv2/opencv.hpp>
#include<iostream>
#include<math.h>

using namespace std;
using namespace cv;
/*
Mat src, hsv, hue;
int bins = 12;
void Hist_And_Backprojection(int, void*);
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

	cvtColor(src, hsv, CV_BGR2HSV);
	hue.create(hsv.size(), hsv.depth());
	int nchannels[] = { 0,0 };
	mixChannels(&hsv, 1, &hue, 1, nchannels, 1);

	createTrackbar("bar", ouput, &bins, 180, Hist_And_Backprojection);
	//Hist_And_Backprojection(0,0);

	waitKey(0);
	return 0;
}
void Hist_And_Backprojection(int, void*) {
	float range[] = { 0,180 };
	const float *histRanges = { range };

	Mat h_hist;
	calcHist(&hue, 1, 0, Mat(), h_hist, 1, &bins, &histRanges, true, false);
	normalize(h_hist, h_hist, 0, 255, NORM_MINMAX, -1, Mat());

	Mat backPrhImage;
	calcBackProject(&hue, 1, 0, h_hist, backPrhImage, &histRanges, 1, true);

	imshow("out", backPrhImage);

	int hist_h = 400, hist_w = 400;
	Mat histImage(hist_h,hist_w,CV_8UC3,Scalar(0,0,0));
	int bin_w = (hist_w / bins);
	for (int i = 1; i < bins; i++) {
		rectangle(histImage, Point((i - 1)*bin_w, (hist_h - cvRound(h_hist.at<float>(i - 1)*(400 / 255)))),
			//Point((i)*bin_w, (hist_h - cvRound(h_hist.at<float>(i)*(400 / 255)))), 
			Point(i*bin_w, hist_h), Scalar(0, 0, 255) ,-1);
	}
	imshow("hist", histImage);
}
*/
//用直方图模型去目标图像中寻找是否有相似的对象
//用HSV色彩空间的HS两个通道直方图模型
//