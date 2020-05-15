#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

int main() {
    //Mat input_image = imread("images/otsu_algorithm.jpg", IMREAD_GRAYSCALE);
    //Mat input_image = imread("images/Fig10_org.tif", IMREAD_GRAYSCALE);
    //Mat input_image = imread("images/Fig10_std_10.tif", IMREAD_GRAYSCALE);
    Mat input_image = imread("images/Fig10_std_50.tif", IMREAD_GRAYSCALE);
    
    Mat dst(input_image.size(), input_image.type());

    threshold(input_image, dst, 0, 255, THRESH_OTSU);

    imshow("THRESH_OTSU", dst);
    imshow("Original image", input_image); 
    waitKey(0);
    return 0;
}
