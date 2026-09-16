# Aion2 모작 Team_Project
Unreal Engine을 활용한 팀 프로젝트 게임 모작에서 직접 구현한 기능들의 샘플 코드입니다.

<div align="center">
  <img width="400" alt="아이온2" src="https://github.com/user-attachments/assets/249da04d-4ddf-411a-9ae2-e2135f452c24" />
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

- GAS, State Tree <br><br>
  <img width="600" alt="티메시아 사진" src="https://github.com/user-attachments/assets/ee9c66d6-7f44-4c17-ae49-28cb15358a14" />


  <br><br>
  <img width="600" alt="티메시아 사진" src="https://github.com/user-attachments/assets/dcc70e5f-85d7-454c-9b0f-2c40b127894e" />
  
     
<br><br>

- 보스 패턴 구현 <br><br>

  - 근접 공격 패턴 ( Target이 근접해 있을 때 ) 
  <img width="550" height="340" alt="Image" src="https://github.com/user-attachments/assets/efd021a6-de2b-4052-9fb5-ba49fa29d831" />

  <br><br>
  
  - 돌진 공격 패턴 ( Target이 근접해 있을 때 ) 
  <img width="550" height="340" alt="Image" src="https://github.com/user-attachments/assets/4a4df034-0e61-4bed-9dd8-2666854a84b0" />

  <br><br>

  - 원거리 범위 공격 ( Target이 일정 거리보다 멀리 있을 때 ) 
  <img width="550" height="340" alt="Image" src="https://github.com/user-attachments/assets/3f6c12a4-6b59-44ba-88b1-0b5462c2a35e" />
  <br><br>

  


