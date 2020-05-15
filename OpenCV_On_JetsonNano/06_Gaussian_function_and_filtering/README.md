# 가우시안 함수와 가우시안 필터링
***
* 다운로드하기
```
git clone https://github.com/jetsonworld/OpenCV_On_JetsonNano.git
```

* [GaussianKernels.cpp](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/06_Gaussian_function_and_filtering/GaussianKernels.cpp) 컴파일 & 실행하기
```
cd OpenCV_On_JetsonNano/06_Gaussian_function_and_filtering
g++ -ggdb GaussianKernels.cpp -o GaussianKernels `pkg-config --cflags --libs opencv4`
./GaussianKernels
```
![GaussianKernels.png](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/06_Gaussian_function_and_filtering/GaussianKernels.png)

* [GaussianFiltering.cpp](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/06_Gaussian_function_and_filtering/GaussianFiltering.cpp) 컴파일 & 실행하기
```
cd OpenCV_On_JetsonNano/06_Gaussian_function_and_filtering
g++ -ggdb GaussianFiltering.cpp -o GaussianFiltering `pkg-config --cflags --libs opencv4`
./GaussianFiltering
```

![GaussianFiltering.png](https://raw.githubusercontent.com/jetsonworld/OpenCV_On_JetsonNano/master/06_Gaussian_function_and_filtering/GaussianFiltering.png)
