# 이미지 미분(Image Derivatives)
***
* 다운로드하기
```
git clone https://github.com/jetsonworld/OpenCV_On_JetsonNano.git
```

* [simpleDerivatives.cpp](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/10_Image_Derivatives_and_Edge_Detection/simpleDerivatives.cpp) 컴파일 & 실행하기
```
cd OpenCV_On_JetsonNano/10_Image_Derivatives_and_Edge_Detection

g++ -ggdb simpleDerivatives.cpp -o simpleDerivatives `pkg-config --cflags --libs opencv4`
./simpleDerivatives
```

![simpleDerivatives_total.png](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/10_Image_Derivatives_and_Edge_Detection/simpleDerivatives_total.png)

* [SobelDerivatives.cpp](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/10_Image_Derivatives_and_Edge_Detection/SobelDerivatives.cpp) 컴파일 & 실행하기
```
cd OpenCV_On_JetsonNano/10_Image_Derivatives_and_Edge_Detection

g++ -ggdb SobelDerivatives.cpp -o SobelDerivatives `pkg-config --cflags --libs opencv4`
./SobelDerivatives
```

![SobelDerivatives.png](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/10_Image_Derivatives_and_Edge_Detection/SobelDerivatives.png)

* [ScharrDerivatives.cpp](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/10_Image_Derivatives_and_Edge_Detection/ScharrDerivatives.cpp)
```
cd OpenCV_On_JetsonNano/10_Image_Derivatives_and_Edge_Detection

g++ -ggdb ScharrDerivatives.cpp -o ScharrDerivatives `pkg-config --cflags --libs opencv4`
./ScharrDerivatives
```

![ScharrDerivatives.png](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/10_Image_Derivatives_and_Edge_Detection/ScharrDerivatives.png)

***
# 외곽선 검출(Edge Detection)
* [sobelEdgeDetector.cpp](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/10_Image_Derivatives_and_Edge_Detection/sobelEdgeDetector.cpp) 컴파일 & 실행하기
```
cd OpenCV_On_JetsonNano/10_Image_Derivatives_and_Edge_Detection

g++ -ggdb sobelEdgeDetector.cpp -o sobelEdgeDetector `pkg-config --cflags --libs opencv4`
./sobelEdgeDetector
```
![sobelEdgeDetector.png](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/10_Image_Derivatives_and_Edge_Detection/sobelEdgeDetector.png)

* [CannyEdgeDetection.cpp](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/10_Image_Derivatives_and_Edge_Detection/CannyEdgeDetection.cpp) 컴파일 & 실행하기
```
cd OpenCV_On_JetsonNano/10_Image_Derivatives_and_Edge_Detection

g++ -ggdb CannyEdgeDetection.cpp -o CannyEdgeDetection `pkg-config --cflags --libs opencv4`
./CannyEdgeDetection
```
![CannyEdgeDetection.png](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/10_Image_Derivatives_and_Edge_Detection/CannyEdgeDetection.png)

* [CannyEdgeDetectionTrackbar.cpp](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/10_Image_Derivatives_and_Edge_Detection/CannyEdgeDetectionTrackbar.cpp)

```
cd OpenCV_On_JetsonNano/10_Image_Derivatives_and_Edge_Detection

g++ -ggdb CannyEdgeDetectionTrackbar.cpp -o CannyEdgeDetectionTrackbar `pkg-config --cflags --libs opencv4`
./CannyEdgeDetectionTrackbar
```

![CannyEdgeDetectionTrackBar.png](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/10_Image_Derivatives_and_Edge_Detection/CannyEdgeDetectionTrackBar.png)

* [noiseAndEdges.cpp](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/10_Image_Derivatives_and_Edge_Detection/noiseAndEdges.cpp) 컴파일 & 실행하기

```
cd OpenCV_On_JetsonNano/10_Image_Derivatives_and_Edge_Detection

g++ -ggdb noiseAndEdges.cpp -o noiseAndEdges `pkg-config --cflags --libs opencv4`
./noiseAndEdges
```

![noiseAndEdges.png](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/10_Image_Derivatives_and_Edge_Detection/noiseAndEdges.png)

* [laplacian.cpp](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/10_Image_Derivatives_and_Edge_Detection/laplacian.cpp) 컴파일 & 실행하기

```
cd OpenCV_On_JetsonNano/10_Image_Derivatives_and_Edge_Detection

g++ -ggdb laplacian.cpp -o laplacian `pkg-config --cflags --libs opencv4`
./laplacian
```

![laplacian.png](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/10_Image_Derivatives_and_Edge_Detection/laplacian.png)

* [BlurDetection.cpp](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/10_Image_Derivatives_and_Edge_Detection/BlurDetection.cpp) 컴파일 & 실행하기

```
cd OpenCV_On_JetsonNano/10_Image_Derivatives_and_Edge_Detection

g++ -ggdb BlurDetection.cpp -o BlurDetection `pkg-config --cflags --libs opencv4`
./BlurDetection
```
![BlurDetection_InputTwoImages.png](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/10_Image_Derivatives_and_Edge_Detection/BlurDetection_InputTwoImages.png)

![BlurDetection.png](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/10_Image_Derivatives_and_Edge_Detection/BlurDetection.png)
