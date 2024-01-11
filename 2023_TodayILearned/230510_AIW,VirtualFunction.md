### 230510

어제 : TimeMgr.cpp 구현하기 / TimeMgr 기능 이해하기

오늘 : TimeMgr 설명하기 / 프레임워크 다른 부분 이해하기

이슈 : 기존 프레임워크 + 루카스 자료 프레임워크 참고하고 있다

### Virtual Function

virtual이라는 키워드가 붙은 함수이다. derived에서 override해서 쓴다 

객체의 타입에 맞게 구현된 함수를 불러서 사용할 수 있도록 한다

상위 클래스에서 정의된 함수를 하위 클래스에서 다시 정의할 수 있다 

→ 객체의 실제 타입이 런타임에 결정된다 

### Pure Virtual Function (= 0)

~~virtual function만 있는 것이다~~ 

구현이 없이 선언만 한 것이다 → instantitate 못한다 

클래스를 상속하면 어떤 함수들이 꼭 들어갈지 강제한다  

### Interface

pure virtual function만 있어서 상속하면 구현해야 하는 것들을 강제한다

→ polymorphically 하게 만드는데 function signature를 같게 만든다

### Abstract class

~~virtual function~~ pure virtual function이 하나라도 있는 클래스이다
