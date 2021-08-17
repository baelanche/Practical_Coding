#pragma once
#define FX_S15_16  1516   	// 교수
#define FX_S16_15  1615   	// 
#define FX_S32_31  3231   	// 
#define FX_S47_16  4716   	// 
#define FX_S23_08  2308   	// 

#define FX_SYSTEM  FX_S15_16	// 자기것
	// MAX = +32767.9975    MIN = -32768.00

#define FX_QNUM	    	16	    	// 쩜 다음에 몇비트 있음 
#define FX_QNUM_HALF1	8	    	// 쩜 다음에 몇비트 있음 
#define FX_QNUM_HALF2	8	    	// 쩜 다음에 몇비트 있음 
#define FX_QFLOAT_VAL	65536.0F
#define FX_QDOUBLE_VAL	65536.0
#define FX_QINT_VAL	(1<<FX_QNUM)

typedef int fx_s15_16;
typedef fx_s15_16 fixed;

#define fromFloat(a)    ((fixed) ((a)*(FX_QFLOAT_VAL)))
#define toFloat(a)	((float) ((a)/FX_QFLOAT_VAL))
#define toDouble(a)	(((a)/FX_QFLOAT_VAL))
#define fx_mul2(a,b)	(fromFloat(((toFloat(a))*(toFloat(b)))))
#define fx_mul3(a,b)	(((a)*(b))>>FX_QNUM)
#define fx_mul4(a,b)	((((long long)(a))*((long long)(b)))>>FX_QNUM)
#define fx_mul5(a,b)	(((a)>>FX_QNUM_HALF1)*((b)>>FX_QNUM_HALF2))

extern fixed fx_div1(fixed, fixed);
extern fixed fx_div2(fixed, fixed);
extern fixed fx_div3(fixed, fixed);
extern fixed fx_div4(fixed, fixed);
