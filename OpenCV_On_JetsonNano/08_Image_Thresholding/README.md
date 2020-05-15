# 이미지 임계값(Image Threshholding)
***
* 다운로드하기
```
git clone https://github.com/jetsonworld/OpenCV_On_JetsonNano.git
```

* [CreateThresholdLena.cpp](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/08_Image_Thresholding/CreateThresholdLena.cpp) 컴파일 & 실행하기
```
cd OpenCV_On_JetsonNano/08_Image_Thresholding

g++ -ggdb CreateThresholdLena.cpp -o CreateThresholdLena `pkg-config --cflags --libs opencv4`
./CreateThresholdLena
```
![CreateThresholdLena.png](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/08_Image_Thresholding/CreateThresholdLena.png)

* [ThresholdingTypes.cpp](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/08_Image_Thresholding/ThresholdingTypes.cpp) 컴파일 & 실행하기
```
cd OpenCV_On_JetsonNano/06_Gaussian_function_and_filtering
g++ -ggdb ThresholdingTypes.cpp -o ThresholdingTypes `pkg-config --cflags --libs opencv4`
./ThresholdingTypes
```

![ThresholdingTypes.png](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/08_Image_Thresholding/ThresholdingTypes.png)
