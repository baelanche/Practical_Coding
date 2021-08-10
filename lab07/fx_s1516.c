#include <math.h>
#include <stdio.h>

#define FX_SYSTEM 
#define FX_S15_16  1516   	// 각자 
#define FX_QNUM	    16	    	// 쩜 다음에 몇비트 있음 

typedef int fx_s15_16;
// typedef long long fx_s47_16; 

typedef fx_s15_16 fixed;

// Conversion From float to fx 
fx_s15_16 fromFloat(float f)
{
	return (int) (f*65536.0);
}

float toFloat(fixed a)
{
	return (float) a / 65536.0; 
} 

// fx_s15_16 multiplication
fixed fx_mul2(fixed a, fixed b)
{
	float fa,fb,fc; 
	fa = toFloat(a); 
	fb = toFloat(b);
	fc = fa*fb; 
	return fromFloat(fc); 
}

fixed fx_mul(fixed a, fixed b)
{
	return a * b / (1<<FX_QNUM); 
}

int main()
{
	fixed a, b, c;
	float fa = 0.2f; 
	float fb = 0.23f; 
	float fc; 
	a = fromFloat(fa); 
	b = fromFloat(fb); 
	c = fx_mul(a,b); 
	fc = toFloat(c); 
	printf("%f %d %f\n", fa, a, toFloat(a)); 
	printf("%f %d %f\n", fb, b, toFloat(b)); 
	printf("%d %f\n", c, fc); 
}


