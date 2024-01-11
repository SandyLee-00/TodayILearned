### DOF (Depth Of Field)

카메라 렌즈에서 비출 때만 존재하는 현상

depthmap으로 초점과 픽셀 거리로 blur 적용한다 

### Depth

Z버퍼에 들어있는 픽셀의 z 값

### Blur

한 픽셀에 대해 계산을 할 때 주변의 픽셀에서 값을 갖고와서 가중치를 매겨 한 픽셀의 값을 갖는다 

### SmoothStep

linear가 아니라 부드러운 보간을 한다 

Hermite 보간을 리턴한다 

### LUT (Look Up Table)

텍스쳐에서 색깔 가져온다 

### Light Shaft (God Ray)

Radial Blur와 동일

light가 그려진 buffer에 Radiaul Blur 적용해서 합성한다 

### Edge Detect Filter

값이 급격하게 변하는 부분만 남긴다 

카툰 렌더링 외곽선 그리기

### Cube Map

환경을 6개 큐브 면에 그려서 표현한다
