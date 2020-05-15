#include <opencv2/opencv.hpp>
#include <vector>
using namespace cv;
using namespace std;

void get_expTable(uchar tab[])
{
    double rmax = 255;
    const double BASE = 1.02;
    double C = 255.0/(pow(BASE, rmax)-1);

    for (int i=0;i<256;i++){
        double v= C * (pow(BASE, i)-1.0);
        tab[i] = saturate_cast<uchar>(v);
    }
}

void process_Image_exp(const char *name)
{
    Mat img = imread(name, IMREAD_GRAYSCALE); 
    imshow("input", img);
    double maxval;
    minMaxLoc(img, NULL, &maxval);
    uchar table[256];
    get_expTable(table);
    Mat table_mat(1, 256, CV_8UC1, table);

    LUT(img, table_mat, img);
    imshow("processed", img); 
    waitKey(0);
}

int main()
{
    process_Image_exp("./images/Fig02_cameraman.tif");
}
