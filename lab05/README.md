# Lab05
* permission
* C compile and execution
## [permission](https://git.ajou.ac.kr/baegyu3/practical_c/-/tree/master/lab01#3-permission)
* rwx를 x -> w -> r 순으로 1, 2, 4 로 치환하여 명령어를 적용 할 수 있음

  ex) chmod 774 [file] : rwxrwxr--
## C compile and execution
* cpp : C Preprocessor (#define, #include, ...)
### example
* cc -o main main.c : 컴파일된 main 생성
* cc -c main.c : main.o 생성
* cc main.o -o ofile : main.o로 컴파일된 ofile 생성
* cc -g main.c : a.out을 생성시키면서 디버깅 가능
* gdb [file] : gdebugger

## func.h
```c
#define ENDING_NUMBER 9999
int func(int a);
```

## func.c
```c
#include <stdio.h>

int func(int in_data)
{
	fprintf(stdout, "stdout : %d Baegyu Jung\n", in_data);
	fprintf(stderr, "stderr : %d Baegyu Jung\n", in_data);
	fflush(stdout);
}
```

## main.c
```c
#include <stdio.h>
#include "func.h"

int main() 
{
	int in_data = 0;
	setvbuf(stdout, NULL, _IOFBF, 100);
	while (in_data != ENDING_NUMBER)
	{
		fscanf(stdin, "%d", &in_data);
		func(in_data);
	}
}
```
