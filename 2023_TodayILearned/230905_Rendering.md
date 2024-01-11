### Frame buffer

화면에 보여지는 메모리 

### Fixed Pipeline

데이터 쭉 통과해서 결과물 나온다

### Programmable Pipeline

vertex + pixel

### world view projection

상수 레지스터에 넣어둔다 constant buffer

### constant buffer

light 정보 N * L

### Deferred Rendering

출력 레지스터 백 버퍼 여러개 

렌더 타겟 여러 개 만들어서 한번에 그릴 수 있게 한다 

정보들을 렌더 타겟에다가 넣어두고 한번에 조합해서 그린다 

### Defferred Rendering vs Forward Rendering

defferred : 여러 lighting 연산 한번에 수행, G buffer 커진다

forward : 기존 렌더링 방식, 파이프라인 쭉 따라가서 최종 이미지 생성 

### RenderTarget

Object Pass 렌더 타겟에 그림 그리기

Shading Pass : 각 픽셀의 색 계산 

### Forward Rendering

기존 렌더링 방식

### Render Target

렌더링 결과를 저장하는 버퍼 

### Normal Map

물체의 normal 정보를 저장하는 render target

### Pos Map

위치 정보를 저장하는 render target

### GPU HAL

Hardware Abstraction Layer

GPU 에 대한 인터페이스 제공 

### skinning (vertex weighting, mesh deformation)

3D 메시의 관절을 자연스럽게 만들기

vertex의 weight를 조절한다 

### Bone based animation

hierarchical 구조로 본을 세팅한다 

### IK (Inverse Kinematics)

end effector에 따라서 관절에서 가중치에 따라 어떻게 움직이는지 설정
