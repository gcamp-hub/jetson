#include <iostream>
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace std;
using namespace cv;

Mat input_image, edges;
const char* window_name = "Edge-Detection";
int lowThreshold;

void CannyThreshold(int, void*) {
    Canny(input_image, edges, lowThreshold, (lowThreshold * 3), 3);
    imshow(window_name, edges);
}

int main()
{
    input_image = imread("images/Fig04_house.tif");
    //cvtColor(input_image, input_image, CV_BGR2GRAY);
    cvtColor(input_image, input_image, cv::COLOR_BGR2GRAY);

    edges.create(input_image.size(), input_image.type());

    //namedWindow(window_name, CV_WINDOW_NORMAL);
    namedWindow(window_name, cv::WINDOW_NORMAL);
    createTrackbar("Min-Threshold:", window_name, &lowThreshold, 100, CannyThreshold);
    CannyThreshold(0, 0);

    waitKey(0);
    return 0;
}
