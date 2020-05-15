#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>

using namespace std;
using namespace cv;


int main() {
    Mat image = imread("images/image.jpg", IMREAD_GRAYSCALE);
    imshow("Output", image);
    waitKey(0); 

    return 0;
}
