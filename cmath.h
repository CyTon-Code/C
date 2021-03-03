#include <stdio.h>
#include <math.h>
//#include "math.h"
//#include "string"
void input(char* value, double n){
//    double n;

    printf("%s", value);  // вывод
    scanf("%lf", &n);  // ввод
    printf("\n");  // вывод
}

double E = 2.718281828459045;
double El = 2.7182818284590452353602874713526624977572;
//double exp(
   //double x
//);
//float exp(
   //float x
//);  // C++ only
//long double exp(
   //long double x
//);  // C++ only
//float expf(
   //float x
//);
//long double expl(
   //long double x
//);
//#define exp(z) // Requires C11 or higher

double POW(double n, double m)
{
    double j = 1;  // изначательное число.
    for (int i = 0; i < m; i++, j*=n);  // разгон к нужному числу.
    return j;  // конечное число.
}
double EXP(double m)
{
    return POW(E, m);  // конечное число.
}

/*******************************************************************/
/* An ultimate sin routine. Given an IEEE double machine number x  */
/* it computes the rounded value of sin(x).            */
/*******************************************************************/
#ifndef IN_SINCOS
double
SECTION
__sin (double x)
{
  double t, a, da;
  mynumber u;
  int4 k, m, n;
  double retval = 0;

  SET_RESTORE_ROUND_53BIT (FE_TONEAREST);

  u.x = x;
  m = u.i[HIGH_HALF];
  k = 0x7fffffff & m;       /* no sign           */
  if (k < 0x3e500000)       /* if x->0 =>sin(x)=x */
    {
      math_check_force_underflow (x);
      retval = x;
    }
/*--------------------------- 2^-26<|x|< 0.855469---------------------- */
  else if (k < 0x3feb6000)
    {
      /* Max ULP is 0.548.  */
      retval = do_sin (x, 0);
    }               /*   else  if (k < 0x3feb6000)    */

/*----------------------- 0.855469  <|x|<2.426265  ----------------------*/
  else if (k < 0x400368fd)
    {
      t = hp0 - fabs (x);
      /* Max ULP is 0.51.  */
      retval = copysign (do_cos (t, hp1), x);
    }               /*   else  if (k < 0x400368fd)    */

/*-------------------------- 2.426265<|x|< 105414350 ----------------------*/
  else if (k < 0x419921FB)
    {
      n = reduce_sincos (x, &a, &da);
      retval = do_sincos (a, da, n);
    }               /*   else  if (k <  0x419921FB )    */

/* --------------------105414350 <|x| <2^1024------------------------------*/
  else if (k < 0x7ff00000)
    {
      n = __branred (x, &a, &da);
      retval = do_sincos (a, da, n);
    }
/*--------------------- |x| > 2^1024 ----------------------------------*/
  else
    {
      if (k == 0x7ff00000 && u.i[LOW_HALF] == 0)
    __set_errno (EDOM);
      retval = x / x;
    }

  return retval;
}

/* Helper macros to compute sin of the input values.  */
//#define POLYNOMIAL2(xx) ((((s5 * (xx) + s4) * (xx) + s3) * (xx) + s2) * (xx))

//#define POLYNOMIAL(xx) (POLYNOMIAL2 (xx) + s1)

/* The computed polynomial is a variation of the Taylor series expansion for
    //sin(a):

    //a - a^3/3! + a^5/5! - a^7/7! + a^9/9! + (1 - a^2) * da / 2

    //The constants s1, s2, s3, etc. are pre-computed values of 1/3!, 1/5! and so
    //on.  The result is returned to LHS.  */
// #define TAYLOR_SIN(xx, a, da)
//({
    //double t = ((POLYNOMIAL (xx)  * (a) - 0.5 * (da))  * (xx) + (da));
    //double res = (a) + t;
    //res;
//})




//119
/* Given a number partitioned into X and DX, this function computes the sine of
the number by combining the sin and cos of X (as computed by a variation of
the Taylor series) with the values looked up from the sin/cos table to get
the result.  */
static __always_inline double
do_sin (double x, double dx)
{
    double xold = x;
    /* Max ULP is 0.501 if |x| < 0.126, otherwise ULP is 0.518.  */
    if (fabs (x) < 0.126)
        return TAYLOR_SIN (x * x, x, dx);

    mynumber u;

    if (x <= 0)
        dx = -dx;

    u.x = big + fabs (x);
    x = fabs (x) - (u.x - big);

    double xx, s, sn, ssn, c, cs, ccs, cor;
    xx = x * x;
    s = x + (dx + x * xx * (sn3 + xx * sn5));
    c = x * dx + xx * (cs2 + xx * (cs4 + xx * cs6));
    SINCOS_TABLE_LOOKUP (u, sn, ssn, cs, ccs);
    cor = (ssn + s * ccs - sn * c) + cs * s;
    return copysign (sn + cor, xold);
}

////////////////////////////////////////////////////////////////////////////////
/// Base of natural log:
///  \f[ e \f]
//double_t E= 2.71828182845904523536;
