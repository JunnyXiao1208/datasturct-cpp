#include <algorithm>
//�κεݹ���ֹ����һ�ݹ����ʱ��������β�ݹ顣
void reverseArray(int *A, int lo, int hi)
{
    if (lo < hi)
    {
        std::swap(lo, hi);
        reverseArray(A, lo + 1, hi - 1);
    }
}

void reverseArray1(int *A, int lo, int hi)
{
next:
    if (lo < hi)
    {
        std::swap(lo, hi);
        lo++;hi--;
        goto next;
    }
}

void reverseArray2(int *A, int lo, int hi)
{
    while (lo < hi)
    {
        std::swap(A[lo++], A[hi--]);
        
    }
}
