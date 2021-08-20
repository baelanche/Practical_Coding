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
	printf("%f %lld %f\n", fa, a, toFloat(a)); 
	printf("%f %lld %f\n", fb, b, toFloat(b));
	  
	c = fx_div1(a,b);
	fc = toFloat(c);
	printf("Division Test div1 : %lld %f\n", c, fc);

	c = fx_div2(a,b);
	fc = toFloat(c);
	printf("Division Test div2 : %lld %f\n", c, fc);

	c = fx_div3(a,b);
	fc = toFloat(c);
	printf("Division Test div3 : %lld %f\n", c, fc);

	printf("Float point answer : %f\n", fa/fb);
	printf("Float point answer : %e\n", fa/fb);

	a = test_mul2();
	printf("mul2 Sum : %lld\n", a);
	a = test_mul3();
	printf("mul3 Sum : %lld\n", a);
	a = test_mul4();
	printf("mul4 Sum : %lld\n", a);
	a = test_mul5();
	printf("mul5 Sum : %lld\n", a);

	a = test_div1();
	printf("div1 Sum : %lld\n", a);
	a = test_div2();
	printf("div2 Sum : %lld\n", a);
	a = test_div3();
	printf("div3 Sum : %lld\n", a);
}
