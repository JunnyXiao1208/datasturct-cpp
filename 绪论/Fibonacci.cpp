#include <stdio.h>
typedef long long _int64;
//���ַ���
_int64 fib(int n)
{
    return (2 > n) ? (_int64)n
                   : fib(n - 1) + fib(n - 2);
}
//���Եݹ飬���ø����ռ��¼��ֵ
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
//����
_int64 fibI( int n){//����Fibonacci �� ��n��
    _int64 f=1,g=0;
    while(n-->0){g+=f;f=g-f;}
    return g;
}