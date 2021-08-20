#include "fx_s32_31.h"
#include <stdio.h>
#define FX_TEST_ITER_NUMBER 10000000 
void* test_div1() {
	long long sum = 0;
	for (int i=0; i<FX_TEST_ITER_NUMBER;i ++)
		sum += fx_div1(i, i+2);
	printf("Div1 Test %lld\n", sum);
	return NULL;
}
void* test_div2() {
	long long sum = 0;
	for (int i=0; i<FX_TEST_ITER_NUMBER;i ++)
		sum += fx_div2(i, i+100000);
	printf("Div2 Test %lld\n", sum);
	return NULL;
}
void* test_div3() {
	long long sum = 0;
	for (int i=0; i<FX_TEST_ITER_NUMBER;i ++)
		sum += fx_div3(i, i+2);
	printf("Div3 Test %lld\n", sum);
	return NULL;
}
void* test_div4() {
	long long sum = 0;
	for (int i=0; i<FX_TEST_ITER_NUMBER;i ++)
		sum += fx_div4(i, i+2);
	printf("Div4 Test %lld\n", sum);
	return NULL;
}
void* test_mul2() {
	long long sum = 0;
	for (int i=0; i<FX_TEST_ITER_NUMBER;i ++)
		sum += fx_mul2(i, i+2);
	printf("Mul2 Test %lld\n", sum);
	return NULL;
}
void* test_mul3() {
	long long sum = 0;
	for (int i=0; i<FX_TEST_ITER_NUMBER;i ++)
		sum += fx_mul3(i, i+2);
	printf("Mul3 Test %lld\n", sum);
	return NULL;
}
void* test_mul4() {
	long long sum = 0;
	for (int i=0; i<FX_TEST_ITER_NUMBER;i ++)
		sum += fx_mul4(i, i+2);
	printf("Mul4 Test %lld\n", sum);
	return NULL;
}
void* test_mul5() {
	long long sum = 0;
	for (int i=0; i<FX_TEST_ITER_NUMBER;i ++)
		sum += fx_mul5(i, i+2);
	printf("Mul5 Test %lld\n", sum);
	return NULL;
}
