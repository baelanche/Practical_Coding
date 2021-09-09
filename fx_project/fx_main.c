#include <stdio.h>
#include "fx_s.h"
#include "fx_test.h"

int main()
{

	fixed a, b, c;
	float fa,fb,fc; 

#ifdef FX_S23_08
	printf("THIS TEST ON FX_S23_08\n");
#elif FX_S32_31
	printf("THIS TEST ON FX_S32_31\n");
#elif FX_S47_16
	printf("THIS TEST ON FX_S47_16\n");
#elif FX_S16_15
	printf("THIS TEST ON FX_S16_15\n");
#endif
	printf("Enter the Two test Number\n");
	scanf("%f %f",&fa, &fb); 
	a = fromFloat(fa); 
	b = fromFloat(fb); 
#ifdef FX_S23_08

	printf("%f %d %f\n", fa, a, toFloat(a)); 
	printf("%f %d %f\n", fb, b, toFloat(b)); 
	c = fx_div1(a,b); 
	fc = toFloat(c); 


	printf("Division Test div1 : %d %f\n", c, fc); 
	c = fx_div2(a,b); 
	fc = toFloat(c); 
	printf("Division Test div2 : %d %f\n", c, fc); 
	
	c = fx_div3(a,b); 
	fc = toFloat(c); 
	printf("Division Test div3 : %d %f\n", c, fc); 
	printf("Floating Point 정답%f\n", fa/fb); 
	printf("Floating Point 정답%e\n", fa/fb); 

#elif FX_S16_15
	
	printf("%f %d %f\n", fa, a, toFloat(a)); 
	printf("%f %d %f\n", fb, b, toFloat(b)); 
	c = fx_div1(a,b); 
	fc = toFloat(c); 
	
	printf("Division Test div1 : %d %f\n", c, fc); 
	c = fx_div2(a,b); 
	fc = toFloat(c); 
	printf("Division Test div2 : %d %f\n", c, fc); 
	
	c = fx_div3(a,b); 
	fc = toFloat(c); 
	
	printf("Division Test div3 : %d %f\n", c, fc); 
	printf("Floating Point 정답%f\n", fa/fb); 
	printf("Floating Point 정답%e\n", fa/fb); 

#elif FX_S32_31
	
	printf("%f %lld %f\n", fa, a, toFloat(a)); 
	printf("%f %d %f\n", fb, b, toFloat(b)); 
	c = fx_div1(a,b); 
	fc = toFloat(c); 
	
	printf("Division Test div1 : %lld %f\n", c, fc); 
	c = fx_div2(a,b); 
	fc = toFloat(c); 
	printf("Division Test div2 : %lld %f\n", c, fc); 
	
	c = fx_div3(a,b); 
	fc = toFloat(c); 
	
	printf("Division Test div3 : %lld %f\n", c, fc); 
	printf("Floating Point 정답%f\n", fa/fb); 
	printf("Floating Point 정답%e\n", fa/fb); 
#elif FX_S47_16

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
	printf("Floating Point 정답%f\n", fa/fb); 
	printf("Floating Point 정답%e\n", fa/fb); 
#endif
	unsigned long long ret =0 ;

	ret = test_mul2(); 
	printf("mul2 Sum: %lld\n", ret); 
	ret = test_mul3(); 
	printf("mul3 Sum: %lld\n", ret); 
	ret = test_mul4(); 
	printf("mul4 Sum: %lld\n", ret); 
	ret = test_mul5(); 
	printf("mul5 Sum: %lld\n", ret); 


	ret = test_div1(); 
	printf("Div1 sum: %lld\n", ret); 
	ret = test_div2(); 
	printf("Div2 sum: %lld\n", ret); 
	ret = test_div3(); 
	printf("Div3 Sum: %lld\n", ret); 
}

