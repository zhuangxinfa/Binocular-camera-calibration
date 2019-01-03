#ifndef SHUANGMU2_H
#define SHUANGMU2_H

#include <QtWidgets/QMainWindow>
#include "ui_shuangmu2.h"
#include <opencv2/opencv.hpp>
#include <opencv2\highgui.hpp>   
#include <opencv2\core.hpp>
#include <opencv2\highgui.hpp>
#include <opencv2\imgproc.hpp>
#include <opencv2\core\types_c.h>
#include <opencv2\opencv.hpp>
#include <iostream>

#include <vector>
#include <string>
#include <algorithm>

#include <iterator>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include"thread.h"
using namespace cv;
class shuangmu2 : public QMainWindow
{
	Q_OBJECT

public:
	//VideoCapture capture(1);
	//VideoCapture capture2(2);
	int right_camera = 1;
	int left_camera = 0;
	shuangmu2(QWidget *parent = 0);
	//void StereoCalib(shuangmu2 *,const vector<string>& imagelist, Size boardSize, float squareSize, bool displayCorners = true, bool useCalibrated = true, bool showRectified = true);
	~shuangmu2();

	Mat main_x();
	// Mat StereoCalib(const vector<std::string>& imagelist, Size boardSize, float squareSize, bool displayCorners = true, bool useCalibrated = true, bool showRectified = true);
private slots:
	void accept(int i);
	void  left_comBoBox();
	void  right_comBoBox();
	//int main_x();
	//void show_video();
	void show_video2();
	void calib();
private:

	QImage img2;
	QImage img3;
	QImage *image;
	Thread thread;

	Ui::shuangmu2Class ui;
};

#endif // SHUANGMU2_H
