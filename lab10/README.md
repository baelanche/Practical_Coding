# lab10
* Make

## Make
* 두 개 이상의 파일을 컴파일 할때는 아래와 같이 하였다
```
cc fx_main.c fx_s1516.c fx_test.c
```

* Makefile 을 만들어 규칙에 따라 파일을 작성하면 컴파일을 편하게 할 수 있다
* 구조는 다음과 같다
```
CC = gcc

target1 : dependency1 dependency2
	command1
	command2
```

### example
```
OBJS = fx_main.o fx_test.o fx_s1516.o
SRCS = fx_main.c fx_test.c fx_s1516.c
CCFLAGS = -g -pg -Wall

fx_main: $(OBJS)
         cc $(CCFLAGS) -o $@ $(OBJS)

%.o: %.c
         cc $(CCFLAGS) -c $<

clean:
         \rm -f $(OBJS)
cleanall:
         \rm -f fx_main $(OBJS)
depend:
         gccmakedep -- $(CCFLAGS) -- $(SRCS)
```
* CC = gcc : $(CC)를 통해 gcc로 컴파일한다
* CFLAGS : 컴파일 옵션 지정
* clean, depend 등은 make [command] 형태로 사용한다
`make clean, make cleanall, make depend`


