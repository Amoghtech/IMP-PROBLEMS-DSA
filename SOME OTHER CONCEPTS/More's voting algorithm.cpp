// C++ program to compute
// factorial of big numbers
#include <iostream>
using namespace std;

// Maximum number of digits in
// output
#define MAX 100000

int multiply(int x, int res[], int res_size)
{

    int carry = 0;
    for (int i = 0; i < res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry)
    {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}

// This function finds
// power of a number x
void power(int x, int n)
{

    //printing value "1" for power = 0
    if (n == 0)
    {
        cout << "1";
        return;
    }

    int res[MAX];
    int res_size = 0;
    int temp = x;

    // Initialize result
    while (temp != 0)
    {
        res[res_size++] = temp % 10;
        temp = temp / 10;
    }

    // Multiply x n times
    // (x^n = x*x*x....n times)
    for (int i = 2; i <= n; i++)
        res_size = multiply(x, res, res_size);

    for (int i = res_size - 1; i >= 0; i--)
        cout << res[i];
}

// Driver program
int main()
{
    int exponent = 0;
    int base = 5;
    cin >> exponent;
    ;
    power(base, exponent);
    return 0;
}
