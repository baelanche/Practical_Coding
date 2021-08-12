#include <stdio.h>
#include "fx_s32_31.h"
#include "fx_test.h"

int main()
{
	fixed a, b, c;
	float fa,fb,fc; 
	scanf("%f %f",&fa, &fb); 
	a = fromFloat(fa); 
	b = fromFloat(fb); 
	printf("%f %d %f\n", fa, a, toFloat(a)); 
	printf("%f %d %f\n", fb, b, toFloat(b)); 
	c = fx_mul5(a,b); 
	fc = toFloat(c); 
	printf("mul5 : %d %f\n", c, fc); 
	c = fx_mul4(a,b); 
	fc = toFloat(c); 
	printf("mul4 : %d %f\n", c, fc); 
	c = fx_mul3(a,b); 
	fc = toFloat(c); 
	printf("mul3 : %d %f\n", c, fc); 
	c = fx_mul2(a,b); 
	fc = toFloat(c); 
	printf("mul2 : %d %f\n", c, fc); 
	printf("%f\n", fa*fb); 
	printf("%e\n", fa*fb);

	printf("m2 : %d\n", test_mul2()); 
	printf("m3 : %d\n", test_mul3()); 
	printf("m4 : %d\n", test_mul4()); 
	printf("m5 : %d\n", test_mul5()); 
}
