#include "fx_s1516.h"

fixed fx_div1(fixed a, fixed b) {
	return fromFloat(toFloat(a) / toFloat(b));
}

fixed fx_div2(fixed a, fixed b) {
	// (a/b)/FX_QNUM
	// FX_QNUM = FX_QNUM_HALF1 + 2
	// if a > 2^24 then overflow
	// b는 하위 8비트의 데이터를 버리게 되므로 오차가 발생할 수 있음
	return (a<<FX_QNUM_HALF1) / (b>>FX_QNUM_HALF2);
}

fixed fx_div3(fixed a, fixed b) {
	long long la = a;
	la <<= FX_QNUM;
	la /= b;
	return (fixed) la;
}

fixed fx_div4(fixed a, fixed b) {	
	return ((a << FX_QNUM_HALF1/b) >> FX_QNUM_HALF2);
}

fixed fx_div5(fixed a, fixed b) {
	//
	return a;
}
