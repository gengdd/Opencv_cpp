#include<opencv2/opencv.hpp>
#include<iostream>
#include<math.h>

using namespace std;
using namespace cv;
/*
int main() {
	Mat src, dst;
	Mat kernel;

	src = imread("D:/AI/opencv_learning/test.jpg");
	if (!src.data) {
		printf("counld not load");
		return -1;
	}

	char input[] = "input";
	char output[] = "output";
	namedWindow(input, CV_WINDOW_AUTOSIZE);
	namedWindow(output, CV_WINDOW_AUTOSIZE);
	imshow(input, src);
	
	//kernel = (Mat_<int>(2, 2) << 1, 0, 0, -1);
	//filter2D(src, dst, -1, kernel, Point(-1, -1), 0.0);
	//imshow(output, dst);

	//kernel = (Mat_<int>(2, 2) << 0, 1, -1, 0);
	//filter2D(src, dst, -1, kernel, Point(-1, -1), 0.0);
	//imshow(output, dst);

	//kernel = (Mat_<int>(3, 3) << -1, 0, 1, -2, 0, 2, -1, 0, 1);
	//filter2D(src, dst, -1, kernel, Point(-1, -1), 0.0);
	//imshow(output, dst);

	//kernel = (Mat_<int>(3, 3) << 0, -1, 0, -1, 4, -1, 0, -1, 0);
	//filter2D(src, dst, -1, kernel, Point(-1, -1), 0.0);
	//imshow(output, dst);

	int c = 0;
	int index = 0;
	int ksize = 3;
	while (true) {
		c = waitKey(500);
		if ((char)c == 27) {
			break;
		}
		ksize = 4 + (index % 5) * 2 + 1;
		Mat kernel = Mat::ones(Size(ksize, ksize), CV_32F) / (float)(ksize*ksize);
		filter2D(src, dst, -1, kernel, Point(-1, 1));
		index++;
		imshow(output, dst);
	}

	waitKey(0);
	return 0;
}
*/
//卷积
//卷计算子
//robert sobel  拉普拉斯