### Upcasting

Base* instance = new Derived() O

reference 가능한 영역이 작아진다 

### Downcasting

Derived* instance = new Base() X

### Upcasting / Downcasting in Memory

new로 heap에 메모리 잡을 때

upcasting : derived로 잡으면 더 크게 잡는다 

downcasting : base로 공간 잡으면 derived 영역 생성 안했는데 써서 문제 생긴다

### Binding

function call을 function의 definition과 결합한다
