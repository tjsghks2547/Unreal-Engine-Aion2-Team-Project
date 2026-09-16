# Directx11 Tymesia 모작 Team_Project
DirectX11을 활용한 팀 프로젝트 게임 모작에서 직접 구현한 기능들의 샘플 코드입니다.

<div align="center">
  <img width="400" alt="티메시아 사진" src="https://github.com/user-attachments/assets/249da04d-4ddf-411a-9ae2-e2135f452c24" />
  <br><br>
  개발기간 : 1개월 <br><br>
  📌해당 설명서는 팀원 개개인이 개별적으로 작성하기에 팀원 모두의 구현 내용을 담은 것이 아닙니다. <br><br>
    작업기간 :  2026.06.17 ~ 2026.07.14
</div>

# 동영상
[https://youtu.be/eyn2wIJE5_0]

# 👩‍💻담당 파트
- 김선환 : 전투, 몬스터 베이스, 몬스터 AI(GAS, StateTree), 보스(탈리스라)
- 이종범 : 전투, 캐릭터 베이스, 플레이어(살성, 치유성), 보스(실리아토르) 
- 박신혜 : 서버( IOCP <-> Dedicated Server )
- 김영우 : 보스, 플레이어(수호성) 
- 김호영 : 게임 모드, GAS AttriBute
- 이수연 : UI
  
# 📖기술 스택 및 개발 환경
- Unreal Engine 5.6
- C++

# 💻구현 컨텐츠 및 기능 설명 

- GAS, State Tree
   - 애니메이션 툴 ( 애니메이션 속도 및 보간 속도, 시작 프레임위치, 끝나는 프레임 위치등을 설정 )
   - 루트 애니메이션<br>
    📝https://seonhwan2547.tistory.com/36 ( Root Animation 구현 및 설계 코드 정리 )
   - 애니메이션 역재생
   - 애니메이션 키 프레임 구간 속도 조절 기능
   - 애니메이션 전환 보간 속도 제어<br>
    📝https://seonhwan2547.tistory.com/37 ( Animation Lerp 구현 및 설계 코드 정리 )
   - 애니메이션 프레임 단위로 사운드, 이펙트, 충돌 등의 이벤트를 자동 트리거하는 프레임 기반 이벤트 시스템을 구현.
  <br><br>
  ![Image](https://github.com/user-attachments/assets/dcc70e5f-85d7-454c-9b0f-2c40b127894e)
     

- PhysX 라이브러리를 사용해 게임 내 모든 충돌 처리 구현
  - Collision Enter / Stay / Exit 함수를 연결하여 해당 Object의 충돌 상태 확인
  - 충돌체 레이어를 활용하여 최적화
<br><br>
![Image](https://github.com/user-attachments/assets/0dc8b743-c306-41cf-8d62-478ee2a4c96b)

- 다양한 셰이더 구현
  - Ditehring
  <br><br>
  ![Image](https://github.com/user-attachments/assets/5a2a2587-41d8-4df3-a665-f7b9d279afae)
  <br><br>
  📝https://seonhwan2547.tistory.com/77 (Dithering 구현 및 설계 코드 정리 )
  - Zoom Blur
  <br><br>
  ![Image](https://github.com/user-attachments/assets/bc11080a-d524-4ab1-8f14-612b8cf95dbc)
  <br><br>
  📝https://seonhwan2547.tistory.com/42 (Zoom Blur 구현 및 설계 코드 정리 )
  -  Color Inversion Shader 
  <br><br>
  ![Image](https://github.com/user-attachments/assets/d80db297-4073-4042-b8e6-69ad323659c5)
  - Dissolve / Glow

- 플레이어 상태 디자인 패턴을 통한 컨트롤 구현


- 카메라 연출
  - Camera Bone을 활용한 컷신 구현
    <br><br>
    ![Image](https://github.com/user-attachments/assets/39738658-97a9-4512-a2b7-d645cdd46165)
    <br><br>
  - Perlin Noise 를 이용한 Camera Shake 기능
    <br><br>
    ![Image](https://github.com/user-attachments/assets/229ca5ba-86f9-49f3-a9d6-2bc787e8b717)
    <br><br>
    📝https://seonhwan2547.tistory.com/40?category=1286192 (Perlin Noise 구현 및 설계 코드 정리)
  - Zoom In / Zoom Out
    <br><br>
    ![Image](https://github.com/user-attachments/assets/48ef232b-d152-491e-b8dd-6005f32f7718)
    
  - Lock On Camera <br><br>
  ![Image](https://github.com/user-attachments/assets/b00b6c60-c7c8-4e54-a02a-f62cb2ab09bb)
  <br><br>
  📝https://seonhwan2547.tistory.com/41?category=1286192 (Lock On Camera 구현 및 설계 코드 정리 )

