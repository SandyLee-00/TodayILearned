🚧 수학 연산들 추가하기

### Modern에서 {} initalizer가 추가된 이유

()이 함수 declaration으로 파싱된다

{}은 더 큰 타입에 자동으로 형변환이 안된다 

### Transformation

Actor를 움직인다 

FTransform / TransformCalculus.h

Matrix.h / FMatrix

### T * R * S

Scale → Rotate → Translate 

### FTransform 10 floats / Matrix 16 floats

transform 3 / rotation quaternion 4 / scale 3

### FQuat

쿼터니언

### Affine Space

point - point : vector

vector + point : vector

point + point : ERROR

### Affine Transformation

같은 공간의 다른 점들로 매핑한다 

local → world → camera → projection

### Homogenous Coordinate

(x/w, y/w, z/w)

### 벡터의 뺄셈

A 에서 B로 가는 벡터 : -A +B

### 행렬의 곱셈

O(N^3) 

### Transform related in UE

Transform.h : FTransform

Quat.h : FQuat

Matrix.h : FMatrix

TransformVectorized.h : FTransform

RotationTranslationMatrix.h : FRotationTranslationMatrix

RotationAboutPointMatrix.h : FRotationAboutPointMatrix

ScaleRotationTranslationMatrix.h : FScaleRotationTranslationMatrix
