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

void process_ImageLog(const char *name) 
{
    Mat img = imread(name,0);
    imshow("input", img);
    uchar table[256];
    get_logTable(table);

        for (int i = 0; i < img.rows; i++)
            for (int j = 0; j < img.cols; j++)
                img.at<uchar>(i,j) = table[img.at<uchar>(i,j)];
    imshow("processed", img);
    waitKey(0);
}

int main()
{
    process_ImageLog("./images/Fig03_DFT.tif");
    //system("pause");
}
