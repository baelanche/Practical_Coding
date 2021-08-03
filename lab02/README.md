# Lab01
* git
* stdio
* buffer
* hello.c

## git
1. 웹 서버에 저장소 생성
2. ssh 서비스를 이용하여 linux 접근
3. 웹 서버의 저장소를 linux 서버에 클론함<br/>
  git clone [https]

## stdio
<p>
stdin, stdout > /usr/include/stdio.h
stdin : 0<
stdout : 1>
stderr : 2>
</p>
### example :
```linux
echo "201923678" 1> id
```
id 파일로 201923678이 출력됨
```linux
./a.out 0< id 1> out.txt 2> err.txt
```
id의 스트림을 입력, stdout은 out.txt, stderr은 err.txt로 출력됨
```linux
./a.out < id > out.txt
```
숫자는 일반적으로 생략한다
```linux
./a.out < id &> out.txt
```
stdout, stderr 한번에 저장 가능
```linux
cat out.txt err.txt > sum
```
out.txt +(concatenate) err.txt = sum
```linux
1>> out.txt ./a.out
...input...
```
log 형태로 계속 쌓음
```linux
./a.out 2> /dev/null
```
stderr은 자동 삭제(null로 보냄)

## buffer
```c
#include <stdio.h>

       int setvbuf(FILE *restrict stream, char *restrict buf, int type,
           size_t size);
```

* {IOFBF} shall cause input/output to be fully buffered.
* {IOLBF} shall cause input/output to be line buffered.
* {IONBF} shall cause input/output to be unbuffered.

## hello.c

```c
#include <stdio.h>

int main()
{
        int in_data = 0;
        while (in_data != 9999)
        {
        fscanf(stdin, "%d", &in_data);
        fprintf(stdout, "Hello stdout : %d Baegyu Jung\n", in_data);
        fprintf(stderr, "Hello stderr : %d Baegyu Jung\n", in_data);
        }
}
```
