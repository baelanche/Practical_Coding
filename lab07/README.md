# FX_S32_31
- Sign bit(1) + Integer parts(32) + Fractional parts(31) : 64bits

### 10진수 -> S3231
* n x 2^31(소수부 비트)
### S3231 -> 10진수
* n / 2^31(소수부 비트)

## Multiplication
```
정수부는 32bits 이므로 long long 을 사용하였고
소수부는 31bits 라서 double 을 사용하였다.
double은 IEEE 부동소수점 방식으로 가수부에 52비트가 주어진다.
그런데 여러 수를 대입해보니 원하는 값이 나오지 않는다.
운영체제별, 컴파일러별로 동작 방식이 다르다고 하여 공부중이다.
