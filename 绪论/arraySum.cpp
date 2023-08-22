
int arraySum(int A[], int lo, int hi)
{
    if (lo == hi)
        return A[lo];
    else
    {
        int mi = (lo + hi) >> 1;
        return arraySum(A, lo, mi) + arraySum(A, mi + 1, hi);
    }
}

int arraySum1(int A[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }
    return sum;
}