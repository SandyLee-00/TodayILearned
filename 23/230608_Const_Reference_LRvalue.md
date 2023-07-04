230609_D2Engine

### int& / const int& / int&& 차이

int& : Lvalue reference

const int& : const Lvalue reference

int&& : Rvalue reference 

### const int&

Lvalue / Rvalue 둘 다 담기 

Rvalue 일 때 임시 객체의 lifetime이 reference 에 맞게 늘어난다 

### const int& as parameter

Rvalue 함수의 인자로 보내기 O

call by ref → 값 복사 X

### Rvalue reference &&

move semantics

### const Rvalue

rvalue : const / non const

### 함수 int& / int return 차이

int& : reference를 리턴 / Lvalue

int : 값을 리턴 / Rvalue

### Dangling reference / Dangling pointer

존재하지 않는 것을 가리키는 것

범위 넘어가거나 delete처리 되었을 때 

### Reference

Alias

### RAII

리소스의 lifetime을 object의 lifetime에 묶는다 

std나 smartpointer로 직접 new delete 하지 않게 한다
