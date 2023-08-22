#include<stdio.h>
typedef long long _int64;
inline _int64 sqr(_int64 a) { return a * a; }
_int64 power2(int n)
{
    if (n == 0)
        return 1;
    return (n & 1) ? sqr(power2(n >> 1)) << 1 : sqr(power2(n >> 1));
}

//通用 求a^n
_int64 power(_int64 a,int n){
    _int64 pow = 1;//处理a^0
    _int64 p = a;
    while(n>0){
        if(n&1)
            pow*=p;
        n>>=1;
        p*=p;
    }
    return pow;

}
