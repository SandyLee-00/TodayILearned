이서영/230616_Item.cpp

### 클래스의 크기

멤버 변수의 사이즈

가상테이블 포인터 사이즈 

### Virtual function - 작동방식

base class에서 virtual 키워드로 써있어서 derived에서 override 할 수 있다

오브젝트가 dynamic type에 맞게 동작하게 한다 

### Runtime Polymorphism

여러 타입을 generic 하게 쓰기 

virtual function + dynamic dispatch

컴파일타임에 정확한 타입 몰라도 된다 

### Compiler - virtual function

1. 오브젝트에서 vptr 로드
2. vptr을 이용해서 해당 객체의 클래스의 vtable 찾아감
3. vtable에서 virtual funtion 함수 포인터 찾기
4. function pointer로 원하는 virtual function 실행하기 

### Vtable

함수 포인터를 배열로 저장했다 

read-only memory에 저장되어 있다

virtual function을 가진 하나의 클래스의 하나의 vtable을 갖고 있다 

### Virtual function / Dynamic Dispatch

virtual function : runtime polymorphism을 하기 위한 interface

dynamic dispatch : 적절한 함수를 런타임에 고르는 방식에 대한 구현 

### Binding

함수를 호출할 때 어떤 함수인지 메모리를 할당하는 것 

### static binding

compile time에 필요한 함수 바인딩 / virtual function이 아닌 member function

### dynamic binding

runtime에 함수 바인딩 / virtual function

base pointer / ref일 때 

### virtual destructor

base pointer가 derived 오브젝트를 가리킬 때

base class의 member + virtual function만 접근할 수 있다

derived에 destrctor 있어도 base의 destructor만 부른다 → new 한 메모리 delete 안함 → memory leak

### Virtual function - Memory Management
