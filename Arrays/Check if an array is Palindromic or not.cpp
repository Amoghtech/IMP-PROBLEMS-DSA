

bool ispal(int num, int *t)
{
    if (num >= 1 && num <= 9)
        return (num == (*t) % 10);

    if (!ispal(num / 10, t))
        return false;

    *t /= 10;

    return num % 10 == (*t) % 10;
}

/*Complete the function below*/
int PalinArray(int a[], int n)
{ //add code here.

    for (int i = 0; i < n; i++)
    {
        int *t = new int(a[i]);
        if (!ispal(a[i], t))
            return 0;
    }
    return 1;
}




// A recursive C++ program to check 
// whether a given number
// is palindrome or not
#include <stdio.h>

// A function that reurns true only 
// if num contains one
// digit
int oneDigit(int num)
{
	
	// Comparison operation is faster 
	// than division
	// operation. So using following 
	// instead of "return num
	// / 10 == 0;"
	return (num >= 0 && num < 10);
}

// A recursive function to find 
// out whether num is
// palindrome or not. Initially, dupNum 
// contains address of
// a copy of num.
bool isPalUtil(int num, int* dupNum)
{
	
	// Base case (needed for recursion 
	// termination): This
	// statement mainly compares the 
	// first digit with the
	// last digit
	if (oneDigit(num))
		return (num == (*dupNum) % 10);

	// This is the key line in this 
	// method. Note that all
	// recursive calls have a separate 
	// copy of num, but they
	// all share same copy of *dupNum. 
	// We divide num while
	// moving up the recursion tree
	if (!isPalUtil(num / 10, dupNum))
		return false;

	// The following statements are 
	// executed when we move up
	// the recursion call tree
	*dupNum /= 10;

	// At this point, if num%10 contains 
	// i'th digit from
	// beiginning, then (*dupNum)%10 
	// contains i'th digit
	// from end
	return (num % 10 == (*dupNum) % 10);
}

// The main function that uses 
// recursive function
// isPalUtil() to find out whether 
// num is palindrome or not
int isPal(int num)
{
	
	// Check if num is negative, 
	// make it positive
	if (num < 0)
		num = -num;

	// Create a separate copy of num, 
	// so that modifications
	// made to address dupNum don't 
	// change the input number.
	// *dupNum = num
	int* dupNum = new int(num); 

	return isPalUtil(num, dupNum);
}

// Driver program to test 
// above functions
int main()
{
	int n = 12321;
	isPal(n) ? printf("Yesn") : printf("Non");

	n = 12;
	isPal(n) ? printf("Yesn") : printf("Non");

	n = 88;
	isPal(n) ? printf("Yesn") : printf("Non");

	n = 8999;
	isPal(n) ? printf("Yesn") : printf("Non");
	return 0;
}










