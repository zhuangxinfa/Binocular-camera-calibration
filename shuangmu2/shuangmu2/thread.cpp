#include "thread.h"
#include <opencv2/opencv.hpp>
#include <opencv2\highgui.hpp>   
#include <opencv2\core.hpp>
#include <opencv2\highgui.hpp>
#include <opencv2\imgproc.hpp>
#include <opencv2\core\types_c.h>
#include <opencv2\opencv.hpp>
#include <QtWidgets/QMainWindow>
using namespace cv;


Thread::Thread()
{
	stopped = false;
}
void Thread::run()
{
	qDebug() << QString("thread run");
	int i = 1;
	while (i&&!stopped) {
		emit send(i);
		msleep(300);
		i++;
}
	stopped = false;
	//发送一个信号给主线程
	/*while (1) {
		Mat img0;
		capture2 >> img0;
		cvtColor(img0, img0, COLOR_BGR2RGB);
		img3 = QImage((const unsigned char*)img0.data, img0.cols, img0.rows, QImage::Format_RGB888);
		img3 = img3.scaled(ui.label2->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
		ui.label2->setPixmap(QPixmap::fromImage(img3));
		ui.label2->show();
		waitKey(30);
	}*/
}
void Thread::stop()
{
	stopped = true;
	
}