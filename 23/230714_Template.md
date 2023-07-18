### Operator Overloading이 Overloading 이라고 불리는 이유?

함수, 연산자에 대해 redefine X → 새로운 것 만들어서 추가하기만 가능

extending O replace X

### 템플릿 함수 ≠ 함수

자료형을 알지 못한다

함수를 만드는 템플릿

사용할 때 컴파일러가 만든다 

### Type parameter

T, U, V, K로 일반적으로 네이밍 한다 

### Template memory location, function calling?

일반적인 함수처럼 함수 포인터로 저장된 곳에서 static dispatch로  불러서 사용한다 

### Static Dispatch

argument와 signature로 어떤 함수를 부를지 컴파일 타임에 결정한다 

일반적인 함수 호출 + overload 된 함수 + template 함수

### Dynamic Dispatch

vptr로 vtable에 있는 함수를 runtime에 결정한다 

### Polymorphism

공통의 base 타입처럼 다른 타입을 묶어서 쓸 수 있게 한다 

### template instantiation

컴파일러가 template로 실제 c++ 함수를 만들어낸다 

호출되면 만든다 

### Template 키워드 class == typename

전에 그렇게 만들어놨다 typename으로 쓰기 

### auto in template

auto 형 자동 추론, 완전하지 않다

### decltype(auto)

템플릿에서 형식 관리하는 키워드 

### auto

형식을 그대로 받지 않는다 const

### Declare / Define 차이?

.h / .cpp

### nullptr?

std::nullptr_t의 prvalue 이다

### Prvalue (Pure Rvalue)

temporary object

다른 object와 연관되지 않은 값
