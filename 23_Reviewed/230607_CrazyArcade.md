오늘 : TIL 정리하기

이슈 : AI 스터디 이번주에 하면 듣고싶다

### Crazy Arcade 플레이 레포트

장르 : 2D 전략

출시 : 2001.10.16

시점 : 탑뷰

### 플레이 스크린샷

### 게임 플레이

목표 : 물풍선을 터트려서 상대방을 없애기

### 게임 플로우

상하좌우로 움직이면서 물풍선을 놓기

→ 부실 수 있는 블록을 부수기

→ 랜덤한 확률로 부서진 블록에서 돈 / 아이템을 얻기

→ 상대가 터진 물풍선에 갇히도록 물풍선을 놓기

### 레벨 디자인

### 공통

드랍되는 아이템, 맵의 구성, 플레이어의 속도 등으로 난이도를 조절한다.

플레이어가 물풍선으로 다른 유저를 다 죽임 → WIN

플레이어가 다른 적보다 먼저 죽음 → LOSE

### PVE

Stage를 진행하며 적의 숫자, 적의 생명으로 난이도를 조절한다.

### PVP

여러 명의 유저가 한 게임에 매칭해 난이도를 조절한다.

---

### Crazy Arcade 구현 명세서

장르 : 2D 전략

시점 : 탑뷰

유사한 게임 : 봄버맨 [https://namu.wiki/w/봄버맨(패미컴)](https://namu.wiki/w/%EB%B4%84%EB%B2%84%EB%A7%A8(%ED%8C%A8%EB%AF%B8%EC%BB%B4))

### 사용 기술

### Map Tiling

Map Tool

### Collision detection

AABB 

OBB

### Enemy AI

A* algorithm

### 카메라

follow player

### UI

PerspectiveFov UI

Ortho UI

Mouse Icon

### Effect

### Tool

Map

NevMesh

Object

Component

Sprite

### Component

Transform

Collider

### Resource Management

Save

Load

---

### 코딩 가이드라인

언리얼 표준 따라가기

### 업무분장도

이서영 - 프로그래머

김형환 - 프로그래머

김정우 - 프로그래머
