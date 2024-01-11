Exe 파일 올리기
기능 없는 상태

### Bounding Volume

오브젝트를 표현하는 크기 

### Ray Tracing

ray-intersection 테스트에 bounding volume 쓴다 

### Axis Aligned Bounding Box

각 축에 평행한 상자를 만들어서 충돌 체크하기 

모든 축에 대해 A.max ≥ B.min 인지 체크하기 

→ 한 축이라도 A.max < B.min || B.max < A.min 이면 충돌 안함

### OBB Oriented Bounding Box

회전된 상자가 충돌했는지 체크한다

박스A X/Y/Z + 박스B X/Y/Z + CrossProduct XX/XY/XZ/YX/YY/YZ/ZX/ZY/ZZ 

### Separating Axis Theorem

convex shape에서 겹친 부분 찾기 

두 개의 도형을 투영한 축에서 하나로도 겹치지 않으면 겹치지 않은 도형이다 

그림자로 두 상자를 비춰서 2차원에 투영하기 → dot product로 각 축에 대한 scalar 값으로 바꾼다 

1차원으로 줄여서 scalar 값 이용하기 

A의 평면 3개 → 1차원 해당 평면의 Normal에 대한 값

B의 평면 3개 → 1차원 해당 평면의 Normal에 대해 값이 0

A Edge 경우의 수 3개 X B Edge 경우의 수 3개 → 두 Egde에 대해 외적해서 Normal을 만든다 : 두 Edge로 하나의 평면을 만들어서 체크한다 = 3차원을 1차원으로 만든다 → OBB랑 동일하게 모든 A B의 Vertex에 대한 min max 구하기

### Separating Axis

두 개의 오브젝트가 투영한 값이 겹치지 않는 축 → 볼록한 도형이면 충돌하지 않았다 

각 Edge의 노말 벡터가 체크해야하는 방향 벡터이다 

### SAT Collision Detection Check Axis

A 평면의 Normal 3개 + B 평면의 Normal 3개 : 평면에 닿을 때 체크 

모든 축에 대한 Cross Products : Edge - Edge일 때 체크

### Hyperplane Separation Theorem

Convex 두 개가 교차하지 않으면 두 개를 나누는 hyperplane이 존재한다 

### 8-DOP

8각형 / 8면체로 된 Bounding Volume

같은 방식으로 Normal을 축으로 해서 그 축에 대해 DotProduct해서 min max 겹쳐있는지 체크한다

### CONVEX HULL

가장 바깥의 Vertex들을 감싸는 Convex를 만든다

같은 방식으로 각 노말을 축으로 해서 모든 축에 대해서 겹친지 체크한다
