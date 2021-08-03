# Lab01

## Linux Instruction

### 0. Connection & User
* ssh [account@link] : [account]로 [link]에 접속
* logout : disconnect
* passwd : 비밀번호 변경

### 1. directory
* pwd : 현재 디렉토리 확인
* ls : 현재 디렉토리의 파일/폴더 확인
* cd [dir] : [dir]로 이동
  . : 현재 디렉토리
  .. : 상위 디렉토리
  / : 루트

### 2. file
* mv [abc1] [abc2] : [abc1] 파일을 [abc2] 파일로 이름 변경
* rm [file] : [file] 삭제
* rm -r [directory] : [directory] 삭제
* rm -rf [file/directory] : [file/directory] 강제 삭제

### 3. permission
 drwxrwxrwx
* d : 파일 종류
* rwx : 소유자 권한
* rwx : 그룹 권한
* rwx : 게스트 권한
* r(read), w(write), e(execute)
* chmod [u|g|o|a , +|-, r|w|x] [file] 

### 4. compile
* cc [file]

### 5. link
* ln [target] [new name] : create link file
* ln -s [target] [new name] : create symbolic link file

### 6. etc
* !! : 이전 명령어 입력
* history : 명령어 입력 기록 출력
* history [index] : [index]번째 명령어 입력
* uname : os 정보 확인
* cat [file] : 텍스트 파일 확인
* more [file] : 텍스트 파일의 내용을 페이징하여 확인 가능
