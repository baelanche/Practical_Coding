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
	  
	printf("d1 : %d\n", test_div1());
	printf("d2 : %d\n", test_div2());
	printf("d3 : %d\n", test_div3());
	printf("%f\n", fa/fb); 
	printf("%e\n", fa/fb);

	printf("m2 : %d\n", test_mul2()); 
	printf("m3 : %d\n", test_mul3()); 
	printf("m4 : %d\n", test_mul4()); 
	printf("m5 : %d\n", test_mul5()); 
}
