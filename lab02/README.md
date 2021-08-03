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

### instruction
git init : 로컬 저장소로 설정

git add . : 디렉토리 내 모든 파일 준비영역으로 이동

git commit -m "message" : 준비영역의 파일을 모두 로컬저장소로 이동

git remote add origin [https] : 원격저장소와 연결

git remote -v : 원격저장소 링크 확인

git push (-u origin master) : 깃에 업로드

git reset HEAD^ : commit, add 취소

<p>
잘못 커밋한 원격저장소의 파일 삭제

git rm --cached [파일 이름]

git rm -r --cached [하위 파일이 있는 폴더 이름]

이후 커밋, 푸시 재진행
</p>

## stdio
<p>
stdin, stdout > /usr/include/stdio.h<br/>
stdin : 0<<br/>
stdout : 1><br/>
stderr : 2>
</p>
### example :
```bash
echo "201923678" 1> id
```
id 파일로 201923678이 출력됨
```bash
./a.out 0< id 1> out.txt 2> err.txt
```
id의 스트림을 입력, stdout은 out.txt, stderr은 err.txt로 출력됨
```bash
./a.out < id > out.txt
```
숫자는 일반적으로 생략한다
```bash
./a.out < id &> out.txt
```
stdout, stderr 한번에 저장 가능
```bash
cat out.txt err.txt > sum
```
out.txt +(concatenate) err.txt = sum
```bash
1>> out.txt ./a.out
...input...
```
log 형태로 계속 쌓음
```bash
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
