이서영/DynamicArray2.cpp

✨ D2DEngineStaticLibrary/Vector2D.cpp

이서영/DoublyLinkedList.cpp

✨ D2D/D2DEngineStaticLibrary/Object.cpp SetPosition
TODO: GameProcess.cpp 에서 전체 프로세스 돌리기

🐛 include 문제 -> pch.h 만들기

### Unit Vector

벡터의 크기가 1인 벡터 == Normalize() 한 벡터 

방향에 대한 값만 이용하기 때문이다\

### A - B

B에서 A로 가는 벡터

### Dot product

벡터의 방향성이 사라지고 크기값만 남는다

연산 비용 싸다 : 곱셈 3번 + 덧셈 2번 → |a| |b| cos(seta)

단위벡터면 |a| == |b| == 1 이여서 cos(seta) 얻는 연산 → 두 벡터 사이의 관계

값 1 → 동일한 단위벡터 / 값 0 → 직교

### 내적 - Diffuse

Diffuse = N * L

### 내적 - Backface Culling

N * C > 0 → 메시의 뒷면 : 뒷면 안 그릴 수 있다

### 내적 - RimLight

N * C = 0 → 메시의 윤곽선

시선 벡터에 따라서 외곽선을 그릴 수 있다

근사값 사용한다 

### 내적 - Fill Light

N * C < 0 → 메시의 앞면 : 앞면 보여서 그려야 한다 

카메라가 빛을 준다

### 내적 + 외적 - 각도 / 방향계산

캐릭터의 방향을 클릭한 그 위치 방향으로 회전시킨다 

Direction * Target = cos(seta)

왼쪽 오른쪽 외적으로 판단

### 역함수

내적해서 cos(seta) 값을 구했는데 여기서 seta를 구해야 한다

arcos(cos(seta)) → seta

### Cross Product

두 벡터 모두에 수직인 벡터 구하기 

연산 순서에 따라 방향이 바뀐다 → 교환법칙 X

부호가 나온다

Normal Vector = U X V

### Normalize

Light Vector 값이 너무 커지면 하얗게 된다 → 0 ~1
