#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace cv;
using namespace std;

int main()
{    
    Mat src = imread("./images/Fig09_noisyFingerprint.tif", cv::IMREAD_GRAYSCALE);
    //Mat src = imread("./images/Fig09_text_image.tif", cv::IMREAD_GRAYSCALE);    
    //Mat src = imread("./images/Fig09_mask.tif", cv::IMREAD_GRAYSCALE);  
    //Mat src = imread("./images/royal_pricess_letter.png", cv::IMREAD_GRAYSCALE); 
    //Mat src = imread("./images/dilationInput.png", cv::IMREAD_GRAYSCALE);
    //Mat src = imread("./images/corona.tif", cv::IMREAD_GRAYSCALE);	  
    Mat dilated_image(src.size(), src.type());
    Mat eroded_image(src.size(), src.type());    
    Mat dst;
    int element_shape = MORPH_RECT;
    double thresh = 120, maxval = 255;
    int threshType = THRESH_BINARY;
    Mat element = getStructuringElement(element_shape, Size(3, 3));

    imshow("Input_Image", src);
 
    threshold(src, dst, thresh, maxval, threshType);
    imshow("Threshold", dst);
 
    dilate(src, dilated_image, element, Point(-1, -1), 1 ,BORDER_REPLICATE);
    imshow("Dilated_Image", dilated_image);
 
    erode(src, eroded_image, element, Point(-1, -1), 1, BORDER_REPLICATE);
    imshow("Eroded_Image", eroded_image);

    imshow("Morphological Gredient", dilated_image - eroded_image);

    waitKey(0);
    return 0;
}
