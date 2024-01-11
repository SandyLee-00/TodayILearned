### Deferred Rendering (Light Pre Pass)

Scene Geometry / Lighting 분리한다 

Geometry Pass → Lighting Pass

### Geometry Pass

Object의 Geometry 정보(Position, Normal, Material) 를 Geometry Buffer에 저장한다 

### Lighting Pass

각 픽셀에 대한 Lighting 계산을 실행 

### Forward Rendering

모든 Object, 모든 Light 에 대한 Lighting 계산을 각 픽셀에 대해 직접 수행

### MRT (Multiple Render Targets)

그래픽카드에서 MRT 지원해야 한다
