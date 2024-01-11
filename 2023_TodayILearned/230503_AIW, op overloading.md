어제 : -

오늘 : Vector 구현하기

이슈 : 메모리 관리 어떻게 하는지 공부하기

### Vector 구현하기

사이즈 부족하면 2배해서 다 옮기고 원래 arr 지우고 포인터 이동하기

### 전위 / 후위 오버로딩

전위 : & 이용해서 바로 값 바꾸기, .ref 타입 반환한다 

후위 : 임시 객체 만들어서 값 리턴하고 원래 객체 ++하기, value를 반환한다 

### Lvalue / Rvalue

l : &해서 접근할 수 있는 값

r : ~~상수, 접근 못하는 값,~~ 임시값, &&

### 앞 const / 뒤 const 의미차이

const iterator operator++(int) const

앞 : 리턴하는 iterator 가 const 

뒤 : iterator의 클래스 멤버 변수가 ~~값이~~ const / const 함수만 호출하기
