#include "fx_s.h"

#define FX_TEST_ITER_NUM 10000000

 long long test_div1()
{
	  long long  sum = 0; 
	for (int i=0; i < FX_TEST_ITER_NUM; i++)
		sum += fx_div1(i, i+FX_QNUM); 
	return sum; 
}
 long long test_div2()
{
	  long long sum = 0; 
	for (int i=0; i < FX_TEST_ITER_NUM; i++)
		sum += fx_div2(i, i+3); 
	return sum; 
}
 long long test_div3()
{
	  long long sum = 0; 
	for (int i=0; i < FX_TEST_ITER_NUM; i++)
		sum += fx_div3(i, i+ FX_QNUM); 
	return sum; 
}


 long long test_mul2()
{
	  long long sum = 0; 
	for (int i=0; i < FX_TEST_ITER_NUM; i++)
		sum += fx_mul2(i, i+2); 
	return sum; 
}
 long long test_mul3()
{
	  long long sum = 0; 
	for (int i=0; i < FX_TEST_ITER_NUM; i++)
		sum += fx_mul3(i, i+2); 
	return sum; 
}
 long long test_mul4()
{
	  long long sum = 0; 
	for (int i=0; i < FX_TEST_ITER_NUM; i++)
		sum += fx_mul4(i, i+2); 
	return sum; 
}
 long long test_mul5()
{
	  long long sum = 0; 
	for (int i=0; i < FX_TEST_ITER_NUM; i++)
		sum += fx_mul5(i, i+2); 
	return sum; 
}
