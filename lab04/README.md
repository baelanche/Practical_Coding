# Lab04
## CRLF
* CR : 현재 커서를 줄 올림 없이 가장 앞으로 옮기는 동작
* LF : 커서는 그 자리에 그대로 둔 상황에서 종이만 한 줄 올려 줄을 바꾸는 동작

  Windows : CRLF(\r\n)

  Unix/Linux : LF(\n)

## etc
* pull/push
  pull : web -> ssh
  
  push : ssh -> web
* scp
  scp a.txt b.txt pc-u10@git.ajou.ac.kr:practical_c/lab04
  
  (a.txt, b.txt 파일을 다음과 같은 경로에 복사함)
* dd
  dd if=a.txt conv=swab : 문자열 순서 뒤바꿈
* od
  od --endian=big -ax a.txt : 빅엔디안으로 보기
  
  od --endian=small -ax a.txt : 리틀(스몰)엔디안으로 보기(default)
* wget
  wget [https] : 경로의 파일을 가져옴
  
  ![ajouicon](./AU_72px.gif)
  
  그냥 가져와 봤음
* tar
  tar cvf lab01.tar lab01 : lab01을 묶어서 lab01.tar로 만듦
  
  tar tvf lab01.tar : tar의 세부리스트 출력

  tar xvf lab01.tar : tar 압축 해제
