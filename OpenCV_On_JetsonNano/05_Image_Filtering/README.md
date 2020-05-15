# 이미지 필터링
***
* 다운로드하기
```
git clone https://github.com/jetsonworld/OpenCV_On_JetsonNano.git
```

* [averaging.cpp](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/05_Image_Filtering/averaging.cpp) 컴파일 & 실행하기
```
cd OpenCV_On_JetsonNano/05_Image_Filtering
g++ -ggdb averaging.cpp -o averaging `pkg-config --cflags --libs opencv4`
./averaging
```

![averaging.png](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/05_Image_Filtering/averaging.png)


* [blurring.cpp](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/05_Image_Filtering/blurring.cpp) 컴파일 & 실행하기
```
cd OpenCV_On_JetsonNano/05_Image_Filtering
g++ -ggdb blurring.cpp -o blurring `pkg-config --cflags --libs opencv4`
./blurring
```

![blurring.png](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/05_Image_Filtering/blurring.png)
