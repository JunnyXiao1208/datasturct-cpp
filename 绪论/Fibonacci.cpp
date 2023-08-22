#include <stdio.h>
typedef long long _int64;
//二分分治
_int64 fib(int n)
{
    return (2 > n) ? (_int64)n
                   : fib(n - 1) + fib(n - 2);
}
//线性递归，利用辅助空间记录先值
_int64 fib(int n,_int64& prev){
    if(n==0)
    {
        prev = 1;return 0;
    }
    else{
        _int64 prevPrev; prev = fib(n-1,prevPrev);
        return prev+prevPrev;
    }
}
//迭代
_int64 fibI( int n){//计算Fibonacci 的 第n项
    _int64 f=1,g=0;
    while(n-->0){g+=f;f=g-f;}
    return g;
}