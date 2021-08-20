#include <stdio.h>

#define FX_S15_16 1516
#define FX_S16_15 1615
#define FX_S32_31 3231
#define FX_S47_16 4716
#define FX_S23_08 2308
#define FX_SYSTEM FX_S32_31

#if FX_SYSTEM==FX_S32_31
#define FX_QNUM 31 // the number of Fractional parts
#define FX_QNUM_HALF1 15
#define FX_QNUM_HALF2 16
#define FX_QFLOAT_VAL 2147483648.0F
#define FX_QDOUBLE_VAL 2147483648.0
#define FX_QINT_VAL (1<<FX_QNUM)

typedef long long fx_s32_31;
typedef fx_s32_31 fixed;

#define fromFloat(a)	((fixed) ((a)*(FX_QFLOAT_VAL)))
#define toFloat(a)	((float) ((a)/(FX_QFLOAT_VAL)))
#define toDouble(a)	((a)/(FX_QFLOAT_VAL))
#define fx_mul2(a,b)	(fromFloat(((toFloat(a))*(toFloat(b)))))
#define fx_mul3(a,b)	(((long long)(a)*(b))>>FX_QNUM)
#define fx_mul4(a,b)	((((long long)(a))*((long long)(b)))>>FX_QNUM)
#define fx_mul5(a,b)	(((a)>>FX_QNUM_HALF1)*((b)>>FX_QNUM_HALF2))

long long test_mul2()
{
    long long sum = 0;
    for (int i=0; i < 10000000; i++)
    {
        sum += fx_mul2(i, i+2);
    }
    return sum;
}

long long test_mul3()
{
    long long sum = 0;
    for (int i=0; i < 10000000; i++)
    {
        sum += fx_mul3(i, i+2);
    }
    return sum;
}

long long test_mul4()
{
    long long sum = 0;
    for (int i=0; i < 10000000; i++)
    {
        sum += fx_mul4(i, i+2);
    }
    return sum;
}

long long test_mul5()
{
    long long sum = 0;
    for (int i=0; i < 10000000; i++)
    {
        sum += fx_mul5(i, i+2);
    }
    return sum;
}

int main()
{
    	fixed a, b, c;
	float fa,fb,fc; 
	scanf("%f %f",&fa, &fb); 

	a = fromFloat(fa); 
	b = fromFloat(fb); 
	printf("%f %lld %f\n", fa, a, toFloat(a)); 
	printf("%f %lld %f\n", fb, b, toFloat(b)); 

	c = fx_mul5(a,b); 
	fc = toFloat(c); 
	printf("mul5 : %lld %f\n", c, fc); 

	c = fx_mul4(a,b); 
	fc = toFloat(c); 
	printf("mul4 : %lld %f\n", c, fc); 

	c = fx_mul3(a,b); 
	fc = toFloat(c); 
	printf("mul3 : %lld %f\n", c, fc); 

	c = fx_mul2(a,b); 
	fc = toFloat(c); 
	printf("mul2 : %lld %f\n", c, fc); 
	printf("%f\n", fa*fb); 
	printf("%e\n", fa*fb); 

  	a = test_mul2();
    	printf("mul2 : %lld\n", a);
    	a = test_mul3();
    	printf("mul3 : %lld\n", a);
    	a = test_mul4();
    	printf("mul4 : %lld\n", a);
    	a = test_mul5();
    	printf("mul5 : %lld\n", a);
}
#endif


