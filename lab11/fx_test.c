#include "fx_s1516.h"
#include <stdio.h>
#define FX_TEST_ITER_NUMBER 10000000 
void test_div1(void* v) {
	int sum = 0;
	for (int i=0; i<FX_TEST_ITER_NUMBER;i ++)
		sum += fx_div1(i, i+2);
	printf("Div1 Test %d\n", sum);
}
void test_div2() {
	int sum = 0;
	for (int i=0; i<FX_TEST_ITER_NUMBER;i ++)
		sum += fx_div2(i, i+300);
	printf("Div2 Test %d\n", sum);
}
void test_div3() {
	int sum = 0;
	for (int i=0; i<FX_TEST_ITER_NUMBER;i ++)
		sum += fx_div3(i, i+2);
	printf("Div3 Test %d\n", sum);
}
void test_div4() {
	int sum = 0;
	for (int i=0; i<FX_TEST_ITER_NUMBER;i ++)
		sum += fx_div4(i, i+2);
	printf("Div4 Test %d\n", sum);
}
void test_mul2() {
	int sum = 0;
	for (int i=0; i<FX_TEST_ITER_NUMBER;i ++)
		sum += fx_mul2(i, i+2);
	printf("Mul2 Test %d\n", sum);
}
void test_mul3() {
	int sum = 0;
	for (int i=0; i<FX_TEST_ITER_NUMBER;i ++)
		sum += fx_mul3(i, i+2);
	printf("Mul3 Test %d\n", sum);
}
void test_mul4() {
	int sum = 0;
	for (int i=0; i<FX_TEST_ITER_NUMBER;i ++)
		sum += fx_mul4(i, i+2);
	printf("Mul4 Test %d\n", sum);
}
void test_mul5() {
	int sum = 0;
	for (int i=0; i<FX_TEST_ITER_NUMBER;i ++)
		sum += fx_mul5(i, i+2);
	printf("Mul5 Test %d\n", sum);
}
