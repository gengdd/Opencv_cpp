#include<opencv2/opencv.hpp>
#include<iostream>

using namespace cv;

//int main() {
//	Mat src, dst;
//	src = imread("D:/AI/opencv_learning/test.jpg"); //bgr
//	if (!src.data) {
//		printf("could not load");
//		return -1;
//	}
//	namedWindow("input image", CV_WINDOW_AUTOSIZE);
//	imshow("input image", src);
//
//	/*
//	//图片高度宽度
//	int cols = (src.cols-1)*src.channels();
//	int offsetx = src.channels();
//	int rows = src.rows;
//	dst = Mat::zeros(src.size(), src.type());
//	for (int row = 1; row < rows - 1; row++) {
//		const uchar* current = src.ptr<uchar>(row);
//		const uchar* previous = src.ptr<uchar>(row - 1);
//		const uchar* next = src.ptr<uchar>(row + 1);
//		uchar* output = dst.ptr<uchar>(row);
//		for (int col = offsetx; col < cols; col++) {
//			output[col] = saturate_cast<uchar>(5 * current[col] - (current[col - offsetx] + current[col + offsetx] + previous[col] + next[col]));
//		}
//	}
//	*/
//
//	double t = getTickCount();
//	Mat kernel = (Mat_<char>(3, 3) << 0, -1, 0, -1, 5, -1, 0, -1, 0);
//	filter2D(src, dst, src.depth(), kernel);
//
//	double timeconsume = (getTickCount() - t) / getTickFrequency();
//	printf("time %.2f",timeconsume);
//
//	namedWindow("image demo", CV_WINDOW_AUTOSIZE);
//	imshow("image demo", dst);
//
//	waitKey(0);
//	return 0;
//}


//mat对象
//像素指针 cv_Assert
//saturate_cast 像素0~255
//mask  -> api filter2D

//getTickCount 时间获取

