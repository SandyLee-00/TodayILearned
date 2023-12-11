이서영/isSameString.cpp

### T* const&& p

unique_ptr from const pointer

### RAII

리소스의 lifetime을 object의 lifetime에 묶는다 

std나 smartpointer로 직접 new delete 하지 않게 한다 

### Smart Pointer

raw pointer 에 추가 기능하도록 해서 객체 생성한다 

### unique_ptr / shared_ptr / weak_ptr

### 소유권

unique : 하나만 한번에 갖기

shared : 여러개 갖기 가능

weak : 소유 안함 

### Lifetime

unique : 범위 넘어가면 지우기 

shared : 마지막 남아있는 포인터가 범위 넘어가면 지우기 

weak : X

### 언제 쓰는지

unique : RAII

shared : 여러 오브젝트가 하나의 리소스 가질 때

weak : shared에서 원형참조 없앨 때
