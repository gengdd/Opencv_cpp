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
		printf("counld not load");
		return -1;
	}

	namedWindow("input", CV_WINDOW_AUTOSIZE);
	imshow("input", src);

	char output[] = "output";
	namedWindow(output, CV_WINDOW_AUTOSIZE);
	
	Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3), Point(-1, -1));
	//morphologyEx(src, dst, CV_MOP_OPEN, kernel);
	morphologyEx(src, dst, CV_MOP_BLACKHAT, kernel);

	imshow(output, dst);

	waitKey(0);
	return 0;
}
*/

//������ �ȸ�ʴ������
//�ղ��� �����ͺ�ʴ
//��̬ѧ�ݶ� ����-��ʴ     �ڲ��ݶȡ������ݶ�
//��ñ ԭͼ���뿪������ֵͼ��
//��ñ �ղ�����ԭͼ���ֵͼ��
//getStructuringElement�ṹԪ��
//��ֵ��ͼ��