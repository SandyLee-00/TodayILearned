### Copy Constructor

객체가 다른 객체의 값으로 초기화 될 때 자동으로 만든다

const TVector& 

### Shallow Copy

default copy constructor

### Deep Copy

멤버 변수로 pointer가 있을 때 필요하다 (동적 메모리, 문자열)

### Conversion Constructor / Conversion Function

객체의 형 변환 

### Copy Assignment Operator

p2 = p1에서 멤버 변수에 포인터 있을 때 같은 값 가리키기 때문에 만들어서 지원해줘야 한다 

메모리 누수 가능성 체크하기 : 기존 내용 delete하기 → new로 메모리 잡기

&copy == this → return : 자기 자신이면 통과하기 

### Move Constructor

rvalue로 새로운 객체 생성할 때 호출되는 생성자

복사생성 빠르게 하기 

shallow copy

소유권 이동

원본 객체 nullptr 초기화 → 접근 못한다 

### Move

copy X 주소만 바꿔서 이동된 효과 만들어서 성능 향상 

### Rvalue Reference &&

rvalue를 참조하기 위해 rvalue ref 변수를 선언한다 

### Rvalue

주소값을 가질 수 없는 값 

### Copy / Move 차이

copy : 전체 값 복사하기

move : 소유권 이동해서 새로운 객체 생성하기 

### Move Constructor 호출 조건

임시객체 전달

std::move()

### std::move(A)

Lvalue 객체 넣으면 Rvalue ref로 변환해서 전달해준다 

### Destructor 있으면 Copy Constructor 만들기

heap에 할당 있는 클래스 가능성 높다 

### Rule of 3 / 5

destructor + copy assignment / destructor + copy + move assignment

### noexcept

안 붙히면 move 에서 그 함수 안 부른다 

### Temporary Object

RValue : eXpiringValue + PureValue

Xvlaue : Rvale 이동 연산 가능

gvlaue : 메모리 상의 고정된 위치를 가지는 표현식  

lvalue + xvalue
