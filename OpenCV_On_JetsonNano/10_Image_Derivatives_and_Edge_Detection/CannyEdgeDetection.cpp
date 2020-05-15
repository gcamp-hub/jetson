#include <iostream>
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace std;
using namespace cv;

void CannyThreshold(int, void*) {
}

int main()
{
    Mat input_image = imread("images/Fig04_house.tif");
    //cvtColor(input_image, input_image, CV_BGR2GRAY);
    cvtColor(input_image, input_image, cv::COLOR_BGR2GRAY);

    Mat edges;
    Canny(input_image, edges, 100, 300, 3, false);

    imshow("Edge-Detection", edges);
    waitKey(0);
    return 0;
}
