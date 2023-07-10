### std::move()

인자를 rvalue reference로 바꿔준다 

### explicit

변환 생성자 X 컴파일러가 알아서 안한다 

parameter에 맞게 explicit하게 생성하기

### 상속할 관계

고양이 is a 동물 O

경찰 has a 총 X

### protected

derived class에서 base의 변수를 사용할 수 있다

변수를 public으로 열지 않으면서도 자식 클래스에서 쓸 수 있도록 했다 

### Derived class 에서 Constructor

생성 / 소멸자는 상속하지 않는다 

derived 에서 생성자를 호출할 때 Base() + Derived()가 호출된다
