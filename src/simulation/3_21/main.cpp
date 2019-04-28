#include<stdio.h>
#include<vector>


#include <opencv2/opencv.hpp>
// #include "cv.h"
// #include "highgui.h"
// #progma comment(lib, "opencv_core220.lib")
// #progma comment(lib, "opencv_highgui220.lib")
// #progma comment(lib, "opencv_imgproc220.lib")

// IplImage* I;

int main(int argc, char *argv[]){
    cv::Mat a = cv::imread("sample.jpg", 1); 
    cv::imshow("hello", a); 
    cv::waitKey();
}