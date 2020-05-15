#include <opencv2/opencv.hpp>
#include <vector>
using namespace cv;
using namespace std;

 
void get_gamma_LUT(uchar table[], double gamma)
{
    double C = 255.0/pow(255, gamma);
    for (int i=0;i<256;i++)
    table[i] = saturate_cast<uchar>(C * pow(i, gamma));
}

void process_Gamma_LUT(const char *name, double gamma)
{
    Mat img = imread(name, 0); 
    imshow("input", img);
    Mat dst;
    uchar table[256]; 
    get_gamma_LUT(table, gamma); 
    Mat Table(1, 256, CV_8UC1, table); 
    LUT(img, Table, dst); 
    imshow("processed", dst);

    waitKey(0); 
} 

int main()
{
    //char input[] = "./images/Fig03_aerial.tif";
    char input[] = "./images/Fig03_spine.tif";
    double gamma = 0.5;
    process_Gamma_LUT(input, gamma);
}
