이서영/D2DDefaultU

✨ CollisionCheck_CC D2D/D2DEngineStaticLibrary/Object.cpp

✨ CC D2D/D2DEngineStaticLibrary/Object.cpp
🚧 AABB

✨ AABB D2D/D2DEngineStaticLibrary/Object.cpp

### const member function

함수가 object의 member var을 바꾸지 않는다

### const qualifier

함수 호출할 때 this pointer 쓴다 거기에 const qualifer 붙혀서 포인터를 const object로 바꾼다 

→ this pointer로 member 변수 못 부르고 const 아닌 member 함수 못 부른다 

### const instance

read-only

const member function 만 쓸 수 있다 

### reference lifetime / aliasing

block scope

원래 object 사라지면 dangling reference

여러 ref가 동시에 접근해서 쓸 때 aliasing 조심하기

### static

Overriding X / Dynamic binding X

### static 멤버 변수

객체의 멤버 X / class 기반 O

전역변수와 동일 / 클래스명으로 접근해야한다 

### static 멤버 함수

this X / instance variable X / overriding X
