```cpp
void GameEngine::Process()
{
	// Time TimeManager deltaTime 계산
	m_timeManager->ProcessDeltaTime();
	float deltaTime = m_timeManager->GetDeltaTime();

	// Input InputManger 유저 키입력 체크
	m_inputManager->ProcessUserInput();

	// Physics SceneManager FIXED_DELTATIME FixedUpdate() 처리
	constexpr float PHYSICS_DELTATIME = 0.02f;
	m_elapsedPhysicsTime += deltaTime;

	while (m_elapsedPhysicsTime >= PHYSICS_DELTATIME)
	{
		m_sceneManager->FixedUpdate(PHYSICS_DELTATIME);
		m_elapsedPhysicsTime -= PHYSICS_DELTATIME;
	}
	
	// Update - Object 현재 Scene GameObject Update()
	m_sceneManager->Update(deltaTime);

	// Update - Collision 현재 충돌 상태 CollisionManager 처리
	m_collisionManager->ProcessCollision(deltaTime);

	// UI UI Event 처리
	m_UIManager->ProcessUIEvent();

	// Camera Camera이동
	m_cameraManager->ProcessCamera();

	// Render Renderer에서 BeginRender
	m_renderer->BeginRender();

	// GameObject Render 현재 씬에 있는 GameObject에 있는 Render 대상인 Component MeshRenderer
	m_sceneManager->Render(m_renderer);

	m_renderer->EndRender();

	// DebugRender Time/Scene/Camera

}
```

```cpp
// 2957번 이진 탐색 트리
/* 
그 시점에서 만들어진 BT의 height 누적 합
set 입력받는 수
map 입력받는수, BT에서 height

X의 높이: max(X보다 작으면서 가장 큰 값 높이 / X보다 크면서 가장 작은 값 높이) + 1

https://everenew.tistory.com/102
*/
```
