#include <stdio.h>
#include "fx_s1516.h"
#include "fx_test.h"
#include <pthread.h>
#define TH_NUM 8

int main()
{
	fixed a, b, c;
	float fa,fb,fc; 
	scanf("%f %f",&fa, &fb); 
	a = fromFloat(fa); 
	b = fromFloat(fb); 
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
	printf("Floating Point answer : %f\n", fa/fb); 
	printf("Floating Point answer : %e\n", fa/fb);

	pthread_t thread[TH_NUM];

	pthread_create(&thread[0], NULL, test_mul2, NULL); 
	pthread_create(&thread[1], NULL, test_mul3, NULL); 
	pthread_create(&thread[2], NULL, test_mul4, NULL); 
	pthread_create(&thread[3], NULL, test_mul5, NULL); 
	pthread_create(&thread[4], NULL, test_div1, NULL); 
	pthread_create(&thread[5], NULL, test_div2, NULL); 
	pthread_create(&thread[6], NULL, test_div3, NULL); 
	pthread_create(&thread[7], NULL, test_div4, NULL); 

	for(int i=0; i<TH_NUM; i++)
		pthread_join(thread[i], NULL);
}
