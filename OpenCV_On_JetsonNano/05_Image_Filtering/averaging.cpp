#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat input_image = imread("images/lena.jpg", IMREAD_GRAYSCALE);
    Mat filtered_image;
    boxFilter(input_image, filtered_image, -1, Size(3, 3), Point(-1, -1), true, BORDER_REPLICATE);

    imshow("Original Image", input_image);
    imshow("Filtered Image", filtered_image);

    waitKey(0);
    return 0;
}
