#include <opencv2/opencv.hpp>
#include <vector>
using namespace cv;
using namespace std;

void get_logTable(uchar tab[])
{
    double rmax=255;
    double C=255.0/log10(rmax+1);
    for (int i=0;i<256;i++){
        double v = C * std::log10((float)i+1.0);
        tab[i] = saturate_cast<uchar>(v);
    }
}

void process_ImageLog_math(const char *name) 
{
    Mat img = imread(name, 0);
    Mat dst;
    img.convertTo(dst, CV_32F); // 8U --> 32F
    dst = dst + 1; // r+ 1
    log(dst, dst); // log(r+1)
    normalize(dst, dst, 0, 255, NORM_MINMAX); 
    // C * log(1+r)
    convertScaleAbs(dst, dst); // 32F --> 8U
    imshow("input", img);
    imshow("processed", dst);
    waitKey(0);
}

int main()
{
    process_ImageLog_math("./images/Fig03_DFT.tif");
    //system("pause");
}
