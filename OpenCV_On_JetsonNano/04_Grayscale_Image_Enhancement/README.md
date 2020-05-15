# 그레이스케일 이미지 향상
***
* 다운로드하기
```
git clone https://github.com/jetsonworld/OpenCV_On_JetsonNano.git
```

* [negativeTransformation.cpp](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/04_Grayscale_Image_Enhancement/negativeTransformation.cpp) 컴파일 & 실행하기
```
cd OpenCV_On_JetsonNano/03_Mat_Objects
g++ -ggdb negativeTransformation.cpp -o negativeTransformation `pkg-config --cflags --libs opencv4`
./negativeTransformation
```

![negativeTransformation.png](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/04_Grayscale_Image_Enhancement/negativeTransformation.png)
