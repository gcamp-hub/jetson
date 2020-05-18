# 젯슨나노에서 파원모드 전환하기

* MAXN(10W):
```
sudo nvpmodel -m 0
```
* 5W:
```
sudo nvpmodel -m 1
```
* 현재모드상태 확인하기:
```
sudo nvpmodel -q
```

* 좀더 자세하게 현재 모드상태를 확인하기:
```
sudo nvpmodel -q --verbose
```

- 파워모드설정에 관한 도움말보기:
```
nvpmodel -h
```

- 사용자정의 파워모드(LOW 모드) 만들기:  'sudo vi/etc/nvpmodel.conf' 열어서 맨아래에 추가합니다.
```
< POWER_MODEL ID=2 NAME=LOW >
CPU_ONLINE CORE_0 1
CPU_ONLINE CORE_1 0
CPU_ONLINE CORE_2 0
CPU_ONLINE CORE_3 0
CPU_A57 MIN_FREQ  0
CPU_A57 MAX_FREQ 102000
GPU_POWER_CONTROL_ENABLE GPU_PWR_CNTL_EN on
GPU MIN_FREQ 0
GPU MAX_FREQ 640000000
GPU_POWER_CONTROL_DISABLE GPU_PWR_CNTL_DIS auto
EMC MAX_FREQ 1600000000

# mandatory section to configure the default mode
< PM_CONFIG DEFAULT=0 >
```

* 반영하기위해 재부팅해줍니다.


* 스크립트 다운로드
```
wget https://raw.githubusercontent.com/jetsonworld/controlPowerModes/master/06_How_To_use_PowerModes_CustomizedMode.txt
```
