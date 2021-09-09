#include "fx_s.h"


fixed fx_div1(fixed a , fixed b)
{
	return fromFloat((toFloat(a) / toFloat(b)));
}

fixed fx_div2(fixed a, fixed b)
{
	if(b <= (1UL << FX_QNUM_HALF2)) 
		return 0;
	return (a << FX_QNUM_HALF1)  / (b >> FX_QNUM_HALF2); 
	// if (b is so small 2^8 보다  작으면 0으로 나누어짐
	// a 기 2의 16승 일때는 답이 overflow 가 됨
}
fixed fx_div3(fixed a, fixed b)
{
	if(b == 0 ) return 0;
	long long la = a ;
	la <<= FX_QNUM;
	return  (fixed)(la / b);
}
