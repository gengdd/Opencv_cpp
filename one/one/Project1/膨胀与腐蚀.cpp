#include<opencv2/opencv.hpp>
#include<iostream>
#include<math.h>

using namespace std;
using namespace cv;

/*
Mat src, dst;
char input[] = "input";
char output[] = "output";

int element_size = 3;
int max_size = 21;
void CallBack(int, void*);

int main() {

	src = imread("D:/AI/opencv_learning/test.jpg");
	if (!src.data) {
		printf("counld not load");
		return -1;
	}

	namedWindow(input, CV_WINDOW_AUTOSIZE);
	imshow(input, src);

	namedWindow(output, CV_WINDOW_AUTOSIZE);
	createTrackbar("element:", output, &element_size, max_size, CallBack);
	CallBack(0,0);

	waitKey(0);
	return 0;
}
void CallBack(int, void*) {
	int s = element_size * 2 + 1;
	Mat strEle = getStructuringElement(MORPH_RECT, Size(s, s), Point(-1, -1));
	//dilate(src, dst, strEle, Point(-1, -1), 1);
	erode(src, dst, strEle, Point(-1, -1));
	imshow(output, dst);
}
*/
//ÐÎÌ¬Ñ§
//createTrackbar  GUI