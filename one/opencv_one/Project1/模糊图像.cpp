#include<opencv2/opencv.hpp>
#include<iostream>
#include<math.h>

using namespace std;
using namespace cv;
/*
int main() {
	Mat src, dst;
	src = imread("D:/AI/opencv_learning/test.jpg");
	if (!src.data) {
		printf("could not load");
		return -1;
	}

	char input_title[] = "input";
	char output_title[] = "output";
	namedWindow(input_title, CV_WINDOW_AUTOSIZE);
	namedWindow(output_title, CV_WINDOW_AUTOSIZE);

	imshow(input_title, src);

	//blur(src, dst, Size(3, 3), Point(-1, -1));
	//blur(src, dst, Size(1, 15), Point(-1, -1));
	//GaussianBlur(src, dst, Size(3, 3), 11, 11);

	//medianBlur(src, dst, 3);
	bilateralFilter(src, dst, 15, 150, 3);

	imshow(output_title, dst);

	waitKey(0);
	return 0;
}
*/
//smooth/Blur ���ò���
//Ԥ����������
//�������
//�����˲�
//��ֵ�˲�����˹�˲�
//filter2D�Զ���kernelҲ����ʵ��ģ��

//��ֵ�˲�,ͳ�������˲��� 
//(��Сֵ�����ֵ)
//˫���˲�,  (����ˣ�ֵ���)
