#include<opencv2/opencv.hpp>
#include<iostream>
#include<opencv2/dnn.hpp>

using namespace std;
using namespace cv;
using namespace cv::dnn;
/*
String model_bin_file = "D:/AI/opencv_learning/dnn/bvlc_googlenet.caffemodel";
String model_txt_file = "D:/AI/opencv_learning/dnn/bvlc_googlenet.protoxt";
String label_txt_file= "D:/AI/opencv_learning/dnn/synset_word.txt";
vector<String> readLabels();

int main() {
	Mat src = imread("D:/AI/opencv_learning/test.jpg");
	if (src.empty()) {
		printf("could not load");
		return -1;
	}
	imshow("input", src);

	vector<String> labels = readLabels();
	Net net = readNetFromCaffe(model_txt_file, model_bin_file);
	if (net.empty()) {
		printf("failed");
		return -1;
	}
	Mat inputBlob = blobFromImage(src, 1.0, Size(224, 224), Scalar(104, 117, 123));
	Mat prob;
	for (int i = 0; i < 10; i++) {
		net.setInputsNames(inputBlob);
		prob = net.forward("prob");
	}
	Mat probMat = prob.reshape(1, 1);
	Point classNumber;
	double classProb;
	minMaxLoc(probMat, NULL, &classProb, NULL, &classNumber);
	int classidx = classNumber.x;
	printf("\n current image classification : %s, possible : %.2f", labels.at(classidx).c_str(), classProb);

	putText(src, labels.at(classidx), Point(20, 20), FONT_HERSHEY_SIMPLEX, 1.0, Scalar(0, 0, 255), 2, 8);
	imshow("imge", src);

	waitKey(0);
	return 0;
}
vector<String> readLabels() {
	vector<String> classNames;
	ifstream fp(label_txt_file);
	if (!fp.is_open()) {
		printf("failed");
		exit(-1);
	}
	string name;
	while (!fp.eof()) {
		getline(fp, name);
		if (name.length()) {
			classNames.push_back(name.substr(name.find(' ') + 1));
		}
	}
	fp.close();
	return classNames;
}
*/