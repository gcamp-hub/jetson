# Jetson Nano 에서 OpenCV 4.1.1 사용하기
***
* OpenCV 버전 확인하기
```
dpkg -l | grep libopencv
```
![HowToCheckTheVersion_on_OpenCV.png](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/HowToCheckTheVersion_on_OpenCV.png)


* 다운로드하기
```
git clone https://github.com/jetsonworld/OpenCV_On_JetsonNano.git
```

* myfile.cpp 컴파일 & 실행하기[예시]
```
cd OpenCV_On_JetsonNano/mydirectory
g++ -ggdb myfile.cpp -o myfile `pkg-config --cflags --libs opencv4`
./myfile
```

![splitColorChannels.png](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/02_Mat_Class/splitColorChannels.png)
