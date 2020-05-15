#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat input_image = imread("images/lena.jpg", IMREAD_GRAYSCALE);
    Mat dst01(input_image.size(), input_image.type());
    Mat dst02(input_image.size(), input_image.type());
    Mat dst03(input_image.size(), input_image.type());

    adaptiveThreshold(input_image, dst01, 255, ADAPTIVE_THRESH_MEAN_C, THRESH_BINARY, 15, 0);
    adaptiveThreshold(input_image, dst02, 255, ADAPTIVE_THRESH_MEAN_C, THRESH_BINARY, 45, 0);
    adaptiveThreshold(input_image, dst03, 255, ADAPTIVE_THRESH_MEAN_C, THRESH_BINARY, 195, 0);
    imshow("MEAN_C 15", dst01); 
    imshow("MEAN_C 45", dst02); 
    imshow("MEAN_C 195", dst03); 
    waitKey(0);
    return 0;
}
