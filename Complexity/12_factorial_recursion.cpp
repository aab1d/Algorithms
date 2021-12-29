//This program gives the factorial of a number using recursion.
#include <iostream>
using namespace std;
int factorial(int n)                                                
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int n;                                                          //1
    cout << "Enter a number: ";                                     //1
    cin >> n;                                                       //1
    int fact = factorial(n);                                        //2
    cout << "The factorial of " << n << " is " << fact << endl;     //1
}