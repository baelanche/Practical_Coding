# Lab01

## Linux Instruction

### 0. Connection
* ssh [account@link] : [account]로 [link]에 접속
* logout : disconnect

### 1. directory
* pwd : 현재 디렉토리 확인
* ls : 현재 디렉토리의 파일/폴더 확인
* cd [dir] : [dir]로 이동
 - . : 현재 디렉토리
 - .. : 상위 디렉토리
 - / : 루트

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
