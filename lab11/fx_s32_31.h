#pragma once
#define FX_S15_16  1516   	// 교수
#define FX_S16_15  1615   	// 
#define FX_S32_31  3231   	// 
#define FX_S47_16  4716   	// 
#define FX_S23_08  2308   	// 

#define FX_SYSTEM  FX_S32_31	// 자기것

#define FX_QNUM	    	31	    	// 쩜 다음에 몇비트 있음 
#define FX_QNUM_HALF1	15	    	// 쩜 다음에 몇비트 있음 
#define FX_QNUM_HALF2	16	    	// 쩜 다음에 몇비트 있음 
#define FX_QFLOAT_VAL	2147483648.0F
#define FX_QDOUBLE_VAL	2147483648.0
#define FX_QINT_VAL	(1<<FX_QNUM)

typedef long long fx_s32_31;
typedef fx_s32_31 fixed;

#define fromFloat(a)    ((fixed) ((a)*(FX_QFLOAT_VAL)))
#define toFloat(a)      ((float) ((a)/(FX_QFLOAT_VAL)))
#define toDouble(a)     ((a)/(FX_QDOUBLE_VAL))
#define fx_mul2(a,b)    (fromFloat(((toFloat(a))*(toFloat(b)))))
#define fx_mul3(a,b)    (((long long)(a)*(b))>>FX_QNUM)
#define fx_mul4(a,b)    ((((long long)(a))*((long long)(b)))>>FX_QNUM)
#define fx_mul5(a,b)    (((a)>>FX_QNUM_HALF1)*((b)>>FX_QNUM_HALF2))

extern fixed fx_div1(fixed, fixed);
extern fixed fx_div2(fixed, fixed);
extern fixed fx_div3(fixed, fixed);
extern fixed fx_div4(fixed, fixed);
extern fixed fx_div5(fixed, fixed);
