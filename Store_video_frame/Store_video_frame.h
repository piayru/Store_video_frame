#ifndef STORE_VIDEO_FRAME_H
#define STORE_VIDEO_FRAME_H

#include <opencv\highgui.h>
#include <opencv2\opencv.hpp>
#include <stdio.h>
#include <time.h>

using namespace std;
using namespace cv;

class  Video_Handle
{
public:
	Video_Handle(string File_Name, string Sotre_path) {
		this->File_Name = File_Name;
		this->Sotre_path = Sotre_path;
	};
	void Store_Frame();

private:
	string File_Name,Sotre_path;
};





#endif 

