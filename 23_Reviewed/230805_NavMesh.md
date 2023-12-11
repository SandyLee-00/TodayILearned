### Recast Detour

재구성 + 우회

네비메쉬 + 길찾기 

거의 안쓴다 

### NavMesh

간략화된 지형 정보 

### A*

휴리스틱 길찾기 

### dt Detour

UE의 길찾기 시스템 

### Agent

이동하는 물체 데이터 

### 2 Rasterize Input Polygon Soup

### 3 Filter Walkable Surfaces

다리길이 / 키 높이 

### 4 Partition Walkable Surface to Simple Regions

이웃정보 추가해서 HeightField 만들기 

### 5 Trace and Simplify Region Contours

윤곽선 추출 

### 7 네비메쉬 디테일 조정

### 8 Create Detour Data from Recast Poly Mesh

### Voxel

### PathEngine

이거 쓰는게 더 낫다 

### CharacterMovementComponent

Actor Component 움직임 관련

### LaunchCharacter

캐릭터에 힘 줘서 날린다 

### Unreal Dedicated Server

일단 냅두기 → 걸어가면서 보간

점프하면서 매 프레임 자기 위치 보낸다 → 공중에서 위치 이동 보간

### ReplicateMoveToServer()

UCharacterMovementComponent 내부 함수 

### 모듈형 게임 피쳐

런타임 상에서 플러그인 추가 / 제거 가능하다
