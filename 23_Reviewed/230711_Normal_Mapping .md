### Shading

빛과 관련해서 입체감을 만든다 

### Ambient Light

전체에 깔려있는 빛 

### Lumen

ambient lighting

Dynamic Global Illumination / Reflection Method

### Directional Light

방향 O 위치 X 

### Point Light

방향 X 위치 O

점에서 물체까지 벡터 구하고 그 벡터로 내적해서 빛 양 구하기 

### Nanite

mesh rendering

### Specular = Phong Reflection

(ReflectionV * ViewV) ^Shiness

(시선 벡터 * 반사 벡터) ^ 범위 줄이기 

2 (NormalV * LightV) NormalV - LightV

### Half Angle Vector

정반사면 Half angle == Normal

### Diffuse

산란 : 빛이 흩어진다 

### Normal Vector

Scale 있으면 Normal이 달라진다 Shear?

S * N = 0

Normal을 구할 때 Transform Matrix의 역전치행렬을 써야한다 

### A * B == A X (B ^T)

A B DotProduct == A X (B의 전치행렬)

### Per Vertex Light

Vertex 기준으로 lighting 한다 

### Linear Interpolation

Source to Destination

### Per Pixel Light

노말을 lerp해서 픽셀 세이더에 넘겨준다 X

→ Normal map 만들어서 계산 줄이기 O

### Normal Mapping

0~1 → -1~1 → 0~254

RGB XYZ

### Bump Mapping

bump_map : 요철

gray scale 로 높이 값 표현

Vertex → pixel

Mesh → pixel 로 최근 변했다 

### PBR

Specular : Smooth + Rough

### BRDF Bidirectional Reflectance Distribution Function

표면에서 어떻게 빛이 반사하는지 나타내는 함수 

### MicroFacet (미세면 분포)

미세면 분포함수 / 기하감쇠 계수 / 프레넬 공식에 의한 반사계수 / 물체 표면의 반사벡터 / normal / light

schlick 근사값 프레넬 항

### 프레넬 항

물체의 경계면 나타내기 

거친 표면이어도 측면으로 가면 빛이 반사한다

### G 기하감쇠율 Geometric Attenuation Factor

masking + shadowing 

### D 미세면 분포 함수 Normal Distribution Function

roughness

GGX in unity

### Object에 들어가는 mapping 종류

Texture : 2D 이미지로 3D 물체의 표면을 그린다 

Normal : 폴리곤의 개수를 늘리지 않고 lighting 할 때 표면의 디테일을 높인다 

Displacement : 표면에 geometric 디테일을 더한다 

Light : static object의 빛 정보를 미리 계산해서 저장해 둔다
