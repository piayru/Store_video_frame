

#include "Store_video_frame.h"



int main() {

	Video_Handle Video_Handle("D:\\ChromeDownload\\16E5_preview.mpg","J:\\Segnet_data\\segnet_Data6");
	Video_Handle.Store_Frame();
	waitKey(0);
	return 0;
}