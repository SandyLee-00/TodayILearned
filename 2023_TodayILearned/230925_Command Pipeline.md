### __vptr / VTable

__vptr : pointer, constructor가 만든다 

VTable : virtual function이 저장된 table, 컴파일러가 만든다 

### Thread

모든 프로세스는 주 스레드가 존재한다 

스레드 별로 Thread Context Block 이 있다

### 병렬성 Pararell

CPU 자체 물리적인 동작 HW

### 동시성 Concurency

동시에 작동하는 것처럼 보인다 SW

### CISC / RISC

명령어 집합 

CISC : complex 인텔 기본적 사용 x86, 회로 복잡 → 발열 

RISC : 길이 일정, 서버용 CPU 

### CPU 게이트

조건 분기, 예외 발생 해야 파이프 라인 성능 잘 나온다

파이프라인 구조의 단점 : 파이프라인의 실행 단계에 가야 그 다음에 들어올 명령어가 틀린지 알 수 있다 → CPU 연산 자체와 상관 없는 메모리 계층에 흔적을 남긴다 

커널 권한을 가지지 않은 프로그램에서 커널 메모리를 읽을 수 있다

### Command Pipeline

명령어를 하나 처리하고 다음 명령어를 처리하는 방법(X) 

명령어를 각 단계별로 나누어서 파이프라인에서 다음 상태로 넘겨주는 방법 (O) → 한 사이클에 여러 명령어 실행 → 병렬성 

### 플린 분류

명령어 + 데이터 처리를 어떻게 하는지 분류한다 

### SIMD / GPGPU

parallel 처리 

simd : CPU, 데이터 수준의 병렬성, 

GPGPU : GPU, 병렬 컴퓨팅 플랫폼, OpenCL, CUDA
