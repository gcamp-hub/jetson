# Jetson stats
[![PyPI - Downloads](https://img.shields.io/pypi/dw/jetson-stats.svg)](https://pypistats.org/packages/jetson-stats) [![PyPI version](https://badge.fury.io/py/jetson-stats.svg)](https://badge.fury.io/py/jetson-stats) [![Build Status](https://travis-ci.org/rbonghi/jetson_stats.svg?branch=master)](https://travis-ci.org/rbonghi/jetson_stats) [![PyPI - Python Version](https://img.shields.io/pypi/pyversions/jetson-stats.svg)](https://www.python.org/) [![PyPI - Format](https://img.shields.io/pypi/format/jetson-stats.svg)](https://pypi.org/project/jetson-stats/)

**jetson-stats 는 NVIDIA Jetson [Nano, Xavier, TX2i, TX2, TX1] 내장 보드 를 모니터링 하고 제어 하기 위한 패키지 입니다. jetson-stats를 설치하면 다음이 포함됩니다:
* [jtop](#jtop)
* [jetson_release](#jetson_release)
* [jetson_variables](#jetson_variables)

자세한 내용 은 [Wiki](https://github.com/rbonghi/jetson_stat/wiki) 를 읽으십시오


## 설치

```elm
sudo -H pip install jetson-stats
```
**🚀 그게 다야! 🚀** 

jetson 통계를 사용하기 위해 다른 정보가 필요하지 않습니다

## jetson-stats 버전 업데이트

이제 시스템 모니터 업데이트가 이전보다 쉬워졌습니다.

```elm
sudo -H pip install -U jetson-stats
```

## [**jtop**][jtop] 
터미널에서 실행되며 [NVIDIA Jetson][NVIDIA Jetson] 의 상태를 실시간으로 보고 **제어** 하는 시스템 모니터링 유틸리티입니다 . CPU, RAM, GPU 상태 및 주파수 및 기타 ...


프롬프트 인터페이스는 다음 이미지와 같이 표시됩니다:
![jtop](https://github.com/rbonghi/jetson_stats/wiki/images/jtop.gif)

당신이 JTop는 실행할 수 있습니다 (실행하기 위해 **sudo**를 제안합니다.)

```elm
sudo jtop
```
옵션과 함께 다른 옵션을 사용할 수 `-h` 있습니다.
```console
nvidia@jetson-nano:~/$ sudo jtop -h
usage: jtop [-h] [-r REFRESH] [--debug] [--page PAGE] [--version]

jtop is a system monitoring utility and control. Runs on terminal

optional arguments:
  -h, --help   show this help message and exit
  -r REFRESH   refresh interval
  --debug      Run with debug logger
  --page PAGE  Open fix page
  --version    show program's version number and exit
```
### 제어 수단
NVIDIA Jetson을 제어하기 위해 다음 키보드 명령을 사용할 수 있습니다:
* **a** Start/Stop jetson_clocks service (Note: jetson_clocks start only after 60s from up time)

시작 / 중지 jetson_clocks 서비스 (참고 : jetson_clocks 만 시간까지에서 60 년대 이후에 시작)

* **e** Enable/Disable jetson_clocks on board boot

e 보드 부팅시 jetson_clocks 활성화 / 비활성화

* **+** and **-** Increase and decrease the NVPmodel

+ 와 - 증가와 NVPmodel 감소

* **p** and **m** Increase and decrease the Fan speed

p 및 m 팬 속도 증가 및 감소


### 페이지
**jtop** 에는 NVIDIA Jetson을 제어 할 수있는 네 가지 페이지가 있습니다:

1. **ALL** 보드에 대한 모든 정보 : CPU 상태, 메모리, GPU , 디스크, 팬 및 jetson_clocks, NVPmodel 및 기타에 대한 모든 상태가 수집됩니다.

2. **GPU** NVIDIA Jetson에 대한 실시간 GPU 기록

3. **CTRL** 당신은 당신의 상태를 제어 할 수 있습니다

4. **INFO** 정보 라이브러리, CUDA, 일련 번호, 인터페이스 등에 대한 모든 정보 가 수집됩니다.


## [**jetson_release**][jetson_release]
이 명령은 [NVIDIA Jetson][NVIDIA Jetson] 의 상태 및 모든 정보를 표시합니다

![jtop](https://github.com/rbonghi/jetson_stats/wiki/images/jetso_release.png)
## [**jetson_variables**][jetson_variables]
이 스크립트는 쉬운 환경 변수를 생성하여 Jetson의 하드웨어 버전과 이미 설치 한 Jetpack을 확인합니다.

![jtop](https://github.com/rbonghi/jetson_stats/wiki/images/jetson_env.png)

[jtop]: https://github.com/rbonghi/jetson_stats/wiki/jtop
[jetson_variables]: https://github.com/rbonghi/jetson_stats/wiki/jetson_variables
[jetson_release]: https://github.com/rbonghi/jetson_stats/wiki/jetson_release
[jetson_performance]: https://github.com/rbonghi/jetson_stats/wiki/jetson_performance
[jetson_docker]: https://github.com/rbonghi/jetson_stats/wiki/jetson_docker
[NVIDIA]: https://www.nvidia.com/
[NVIDIA Jetson]: http://www.nvidia.com/object/embedded-systems-dev-kits-modules.html

## 참고
[Jetson stats](https://github.com/rbonghi/jetson_stats)
