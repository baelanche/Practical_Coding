#include <stdio.h>
#include "fx_s32_31.h"

#define FX_SYSTEM
#define FX_S32_31 3231
#define FX_QNUM 31 // the number of Fractional parts
#define YY 2147483648.0L // 2^FP

typedef long long fx_s32_31;
typedef fx_s32_31 fixed;

fixed fromDouble(float a) {
	return (fixed)(a * YY);
}

double toDouble(fixed a) {
	return a / YY;
} 

fixed fx_mul(fixed a, fixed b) {
	float fa, fb, fc;
	fa = toDouble(a);
	fb = toDouble(b);
	fc = fa * fb;
	return fromDouble(fc);
}

int main() {
	float fa, fb, fc;
	scanf("%f %f", &fa, &fb);
	fixed a, b, c;
	a = fromDouble(fa);
	b = fromDouble(fb);
	c = fx_mul(a, b);
	fc = toDouble(c);
	
	printf("double : %f fixed : %lld toDouble : %f\n", fa, a, toDouble(a));
	printf("double : %f fixed : %lld toDouble : %f\n", fb, b, toDouble(b));
	printf("fx_mul : %lld toDouble : %f\n", c, fc);
	printf("double * double : %f\n", fa*fb);
}
