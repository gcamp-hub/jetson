# 일반 필터(filter2D)와 베니팅 필터링(마스크)
***
* 다운로드하기
```
git clone https://github.com/jetsonworld/OpenCV_On_JetsonNano.git
```

* [filter2D.cpp](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/07_Filter2D_And_Vignetting/filter2D.cpp) 컴파일 & 실행하기
```
cd OpenCV_On_JetsonNano/07_Filter2D_And_Vignetting
g++ -ggdb filter2D.cpp -o filter2D `pkg-config --cflags --libs opencv4`
./filter2D
```
![filter2D.cpp](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/07_Filter2D_And_Vignetting/filter2D.png)

* [Vignette.cpp](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/07_Filter2D_And_Vignetting/Vignette.cpp) 컴파일 & 실행하기
```
cd OpenCV_On_JetsonNano/06_Gaussian_function_and_filtering
g++ -ggdb GaussianFiltering.cpp -o GaussianFiltering `pkg-config --cflags --libs opencv4`
./Vignette
```

![Vignette.png](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/07_Filter2D_And_Vignetting/Vignette.png)
