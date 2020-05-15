# 젯슨 나노에 웹캠용 fswebcam 패키지를 설치해서 사용해보자
***

젯슨 나노에서 웹캠을 사용하기위해서는 우리는 fswebcam 패키지를 설치해야합니다.
```
sudo apt-get install fswebcam
```

일단 패키지가 설치되었다면 터미널에서 커맨드로 한 이미지를 캡처할수있습니다.
```
fswebcam image.jpg
```

이제 현재 디렉토리에는 웹캠이 가져온 이미지가있는 새로운 image.jpg 파일이 있습니다.

기본 해상도가 매우 낮습니다. 예를 들어 1280 × 720으로 늘리십시오. 이렇게하려면 fswebcam 명령에 -r (resolution을 의미) 옵션 을 추가 한 다음 원하는 해상도 수준을 지정해야합니다.

```
fswebcam -r 1280x720 image2.jpg
```

* 배너 제거

삭제하려는 또 다른 기본 측면은 사진 하단의 파란색 배너입니다. 삭제하려면 –no-banner 옵션 을 삽입하면 됩니다.

```
fswebcam -r 1280x720 --no-banner image.jpg
```

* loadImage.cpp 컴파일하기
```
git clone https://github.com/jetsonworld/fswebcam.git
cd fswebcam/images
fswebcam -r 1280x720 --no-banner image.jpg
cd ..
g++ -ggdb loadImage.cpp -o loadImage `pkg-config --cflags --libs opencv4`
./loadImage
```

