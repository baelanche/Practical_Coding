#include <math.h>
#include <stdio.h>
#include "fx_s32_31.h"

#define FX_SYSTEM
#define FX_S32_31 3231
#define FX_QNUM 31 // Fractional parts
#define sf_31 4294967296.0

typedef long long fx_s32_31;
typedef fx_s32_31 fixed;

float toFloat(fixed a) {
	return (float)(a / sf_31);
} 

// fx_s32_31 multiplication
fixed fx_mul(fixed a, fixed b) {
	float fa, fb, fc;
	fa = toFloat(a);
	fb = toFloat(b);
	fc = fa * fb;
	return int_to_fx(fc);
}

// Conversion From int to fx
fx_s32_31 int_to_fx(int n) {
	return n * sf_31;
}

int main() {
	fixed a, b, c;
	//a = fromFloat(10.5f);
	//b = fromFloat(0.244f);
	printf("%f %lld \n", 10.5f, a);
	printf("%f %lld \n", 0.244f, b);
	//printf("%lld %f \n", fx_mul(a, b), toFloat(fx_mul(a, b)));
}
