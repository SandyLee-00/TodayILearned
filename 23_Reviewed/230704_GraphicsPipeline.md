### 역행렬

(AB)^-1 = B^-1A^-1

역함수와 비슷하다 

### 렌더링 파이프라인

Local → World → View → Projection → Viewport

### Transform Matrix

각 오브젝트가 월드의 위치에 대해 갖고있는 행렬

### 카메라 행렬 = View Matrix

카메라가 원점인 좌표계

카메라도 월드 공간상에 어딘가에 있다

Dir Up

카메라 돌리려고 하기 → 다른 오브젝트가 카메라의 월드 좌표만큼 역행렬 한다 

### Projection Matrix

X / Y : +-1 로 변환하기

Depth Z : 0 ~ 1로 변환하기 

### Motion Blur

픽셀을 정점의 속도벡터 방향으로 샘플링해서 blur 한다

### Post Processing

파이프라인 나온 후 결과값 재 가공 

### Matrix decomposition

값이 결합되어있어서 완벽 분리 불가능 

### Homogenous Coordinate

마지막 1 : 점 마지막 0 : 벡터

### Bone Animation

본의 월드 행렬의 역행렬을 구해서 버텍스에 곱한다 

→ 버텍스가 본의 로컬 공간으로 들어간다
