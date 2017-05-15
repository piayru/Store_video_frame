

#include "Store_video_frame.h"



int main() {

	Video_Handle Video_Handle("Video file path","Store path");
	Video_Handle.Store_Frame();
	waitKey(0);
	return 0;
}
