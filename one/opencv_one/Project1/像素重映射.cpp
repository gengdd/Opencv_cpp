#include<opencv2/opencv.hpp>
#include<iostream>
#include<math.h>

using namespace std;
using namespace cv;
/*
Mat src, dst, map_x, map_y;
char input[] = "input";
char output[] = "output";
int index = 0;
void update_map(void);
int main() {

	src = imread("D:/AI/opencv_learning/test.jpg");
	if (!src.data) {
		printf("could not load");
		return -1;
	}

	namedWindow(input, CV_WINDOW_AUTOSIZE);
	namedWindow(output, CV_WINDOW_AUTOSIZE);
	imshow(input, src);

	map_x.create(src.size(), CV_32FC1);
	map_y.create(src.size(), CV_32FC1);

	int c = 0;
	while (true)
	{
		c = waitKey(500);
		index = c % 4;
		if ((char)c == 27) {
			break;
		}
		update_map();
		remap(src, dst, map_x, map_y, INTER_LINEAR, BORDER_CONSTANT, Scalar(0, 255, 255));

		imshow(output, dst);
	}

	//update_map();
	//remap(src, dst, map_x, map_y, INTER_LINEAR, BORDER_CONSTANT, Scalar(0, 255, 255));

	imshow(output, dst);

	waitKey(0);
	return 0;
}
void update_map(void) {
	for (int row = 0; row < src.rows; row++) {
		for (int col = 0; col < src.cols; col++) {
			switch (index)
			{
			case 0:
				if (col > (src.cols*0.25) && col<(src.cols*0.75) && row>(src.rows*0.25) && row < (src.rows*0.75)) {
					map_x.at<float>(row, col) = 2 * (col - (src.cols*0.25));
					map_y.at<float>(row, col) = 2 * (row - (src.rows*0.25));
				}
				else
				{
					map_x.at<float>(row, col) = 0;
					map_y.at<float>(row, col) = 0;
				}
				break;
			case 1:
				map_x.at<float>(row, col) = src.cols - col - 1;
				map_y.at<float>(row, col) = row;
			case 2:		 
				map_x.at<float>(row, col) = col;
				map_y.at<float>(row, col) = src.rows - row - 1;
			case 3:		 
				map_x.at<float>(row, col) = src.cols - col - 1;
				map_y.at<float>(row, col) = src.rows - row - 1;
			default:
				break;
			}
		}
	}
}
*/
//一定规程将像素映射到另一张图像对应位置
//g(x,y)=f(h(x,y))
//remap
  