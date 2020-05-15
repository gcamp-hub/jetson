#include <opencv2/opencv.hpp>
using namespace cv;

int main(){
    Mat M0(100, 200, CV_8UC1, Scalar(50)); // Gray scale = 50
    Mat M1(100, 200, CV_8UC1, Scalar(100)); // Gray scale = 100
    Mat M2(100, 200, CV_8UC1, Scalar(150)); // Gray scale = 150
    Mat M3(Size(200, 100), CV_8UC3, Scalar(0, 0, 255));   // color=red
    Mat M4(Size(200, 100), CV_8UC3, Scalar(255, 0, 0));   // color=blue
    Mat M5(Size(200, 100), CV_8UC3, Scalar(255, 0, 255));  // color=red+blue
    
    imshow("M0", M0);
    imshow("M1", M1);
    imshow("M2", M2);
    imshow("M3", M3);
    imshow("M4", M4);
    imshow("M5", M5);
    
    waitKey(0);
    return 0;
}
