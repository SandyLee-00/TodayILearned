### Resource Acquisition Is Initialization

Exception-Safe Resource Management

Constructor Acquires Destructor Releases 

Scope-Based Resource Management 

멀티 쓰레드 락 걸기 / 파일 입출력하기 / 스마트 포인터 

### Scope-Based Resource Management

unique_ptr / shared_ptr

Renderer 그냥 포인터 갖는 것보다 unique_ptr 가지면 delete 관리 안해도 된다 

### Container

데이터를 담아두는 방식이다 

### constexpr

#define(X) macro(X)

컴파일 시간 상수 값 정의 

compile time 에 실행할 수 있는 expression이다 

### Expression

operator + operands

### auto

타입이 너무 길어지면 보기 편하게 auto로 해놓는다

헷갈리지 않을 곳에만 잘 써야 한다 

### {} Initializer List

컨테이너는 list constructor를 갖는다 

lnitializer list로 초기화를 한다 

### move semantic

얕은 복사 후 원본의 reference 제거 

메모리 생성, 복사(X) 메모리 주소 복사(O)

임시객체 : 깊은 복사(X), 주소만 복사, 기존 참조 없애기 

### Lambda

function pointer(X)

함수 오브젝트 생성할 때 inline lambda
