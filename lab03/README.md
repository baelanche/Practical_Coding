# Lab03
* pipe
* jobs

## [pipe](https://mug896.github.io/bash-shell/pipe.html)
* Redirect vs Pipe
  Redirect : 프로그램의 결과 혹은 출력을 파일이나 다른 스트림으로 전달
  Pipe : 프로세스 혹은 실행된 프로그램의 결과를 다른 프로그램으로 전달
* mkfifo : 파이프 생성(파일과 같은 형태로 생성됨)
### example
  cmd1 | cmd2 : cmd1, cmd2는 동시에 병렬로 실행된다

## jobs
* jobs : 백그라운드로 실행되는 작업목록을 출력
* process status : run / suspend / terminate
* foreground job / background job
* fg 실행중에는 block되어 다른 명령어 사용 불가
* bg 로 실행하려면 명령어 끝에 & 문자 삽입
### instruction
  kill [PID]
  kill [%job index]
  fg terminate : ctrl + c
  bg terminate : kill [%job index]
  //중간 index의 job을 terminate 시켜도 뒷순서의 job 번호는 바뀌지 않음
  fg suspend : ctrl + z
  bg : suspend 된 작업을 bg 에서 run 시킴
