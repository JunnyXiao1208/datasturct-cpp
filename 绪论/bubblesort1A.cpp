#include <algorithm>

void bubblesort1A(int A[], int n)
{
    bool sorted = false;
    while (!sorted)
    {
        sorted = true;
        for (int i = 0; i < n; i++)
        {
            if (A[i - 1] > A[i])
            {
                std::swap(A[i - 1], A[i]);
                sorted = false;
            }
        }
    }
    n--;
}