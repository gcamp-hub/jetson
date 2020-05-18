# 젯슨나노에 부족한 메모리를 위해 스왑으로 설정하기

* free 명령으로 스왑이 활성화 여부를 확인
```
free -m
```

* swapon 명령으로 스왑 상태를 표시 ZRAM에 
의한 것인지 여부를 확인
```
swapon -s
```
* "dd"명령을 실행하여 4G바이트 스왑파일을 만듭니다.
```
sudo dd if=/dev/zero of=/var/swapfile bs=1G count=4
```
* “mkswap" 명령으로 초기화합니다.
```
sudo mkswap /var/swapfile
```
* root 사용자 만 액세스 할 수 있도록 파일 권한을 변경합니다.
```
sudo chmod 600 /var/swapfile
```

* Jetson Nano 부팅할 때 자동으로 스왑을 마운트하도록합니다.  
/etc/fstab 파일을 vi 편집기에서 열고 맨끝에 한 줄을 추가합니다.

먼저 vi 에디터로 /etc/fstab 엽니다.

```
sudo vi /etc/fstab
```

아래와 같이 맨끝에 추가합니다.

```
/var/swapfile   /none   swap    swap    0 0
```

* 스왑 파일을 활성화하려면 다음과 같이 "swapon"명령을 실행합니다.
```
sudo swapon /var/swapfile
```

* free 명령으로 스왑이 확장 된 것을 확인
```
free -m
```

* swapon 명령으로 스왑의 상태를 확인
```
swapon -s
```
