#include "Store_video_frame.h"


void Video_Handle::Store_Frame() {
	VideoCapture cap(File_Name); // open the default camera
	if (!cap.isOpened()) {  // check if we succeeded
		cout << "Open video fail." << endl;
		return;
	}

	Mat edges;
	namedWindow("edges", 1);
	int Frame_Index = 0;
	clock_t start, finish;
	start = clock();
	for (;;)
	{
		Mat frame;
		cap >> frame; // get a new frame from camera
		if (frame.empty())
			break;
		imshow("Video frame", frame);
		imwrite( Sotre_path + (string)"//Image_" + to_string(Frame_Index) + ".png", frame);
		Frame_Index++;
		if (waitKey(30) >= 0) break;
	}
	finish = clock();
	double duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << "Time :" << duration << endl;
}

