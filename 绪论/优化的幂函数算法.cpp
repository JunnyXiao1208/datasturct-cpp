#include<stdio.h>
typedef long long _int64;
inline _int64 sqr(_int64 a) { return a * a; }
_int64 power2(int n)
{
    if (n == 0)
        return 1;
    return (n & 1) ? sqr(power2(n >> 1)) << 1 : sqr(power2(n >> 1));
}
