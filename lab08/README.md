# lab08
* macro
* debug

## macro
* 매크로는 컴파일되면 사용한 코드 부분이 그대로 치환되므로 디버깅이 힘듦
* 사용할거면 함수를 완성하고 바꾸는 것이 좋음
* 속도 : 함수 < 매크로

## debug
```
cc -g [file] : 출력파일이 디버깅 가능해진다
gdb [file] : [file] 디버깅
run : 프로그램 동작
list : 코드보기
list [index] : [index] 를 중심으로 코드 보기
break [index] : [index] 에 중단점 생성
delete [index] : [index] 의 중단점 삭제
break : 중단점 확인
next : 다음 breakpoint로 이동
ni / next / step : 다음 단계 수행(단위의 차이가 있음)
coni : continue
quit : 종료

file [file] 로 파일 정보를 볼때 debug_info 라는 문구가 추가되어있음을 알 수 있다
```
