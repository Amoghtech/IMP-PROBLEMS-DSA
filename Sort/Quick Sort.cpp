#include <iostream>
using namespace std;

// NLOG2(N)

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "\n";
}

// PARTITIONING PROCEDURE
int partition(int a[], int l, int h)
{
    int i = l - 1;
    int pivot = a[h];

    for (int j = l; j <= h - 1; j++)
    {
        if (a[j] <= pivot)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[h]);
    return i + 1;
}

void quicksort(int a[], int l, int h)
{
    int j;
    if (l < h)
    {
        j = partition(a, l, h);
        quicksort(a, l, j - 1);
        quicksort(a, j + 1, h);
    }
}

int main()
{
    int a[] = {50, 30, 60, 15, 5, 70}, n = 6;
    quicksort(a, 0, n - 1);
    display(a, n);

    return 0;
}