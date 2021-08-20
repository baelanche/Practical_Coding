#include "fx_s32_31.h"

fixed fx_div1(fixed a, fixed b) {
	return fromFloat(toFloat(a) / toFloat(b));
}

fixed fx_div2(fixed a, fixed b) {
	return (a<<FX_QNUM_HALF1) / (b>>FX_QNUM_HALF2);
}

fixed fx_div3(fixed a, fixed b) {
	long long la = a;
	la <<= FX_QNUM;
	la /= b;
	return (fixed) la;
}
