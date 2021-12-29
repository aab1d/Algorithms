//This program gives the sum matrix of two matricies (A and B).
#include <iostream>
#define MAXROWS 10
#define MAXCOLS 10
using namespace std;                                                        //Program steps:
int main()                                                                  //1
{
    int a[MAXROWS][MAXCOLS];                                                //1
    int b[MAXROWS][MAXCOLS];                                                //1
    int c[MAXROWS][MAXCOLS];                                                //1
    int m, n, i, j;                                                         //4

    cout << "Enter the row and column size of matricies respectively:\n";   //1
    cin >> m >> n;                                                          //2


    cout << "Enter the elements of array A(row-wise):\n";                   //1
    for (i = 0; i < m; i++)                                                 //1 + (M+1) + M
    {
        for (j = 0; j < n; j++)                                             //M + M(N+1) + M*N
        {
            cin >> a[i][j];                                                 //M*N
        }
    }

    cout << "Enter the elements of array B(row-wise):\n";                   //1
    for (i = 0; i < m; i++)                                                 //1 + (M+1) + M
    {
        for (j = 0; j < n; j++)                                             //M + M(N+1) + M*N
        {
            cin >> b[i][j];                                                 //M*N
        }
    }

    //Adding the matricies
    for (i = 0; i < m; i++)                                                 //1 + (M+1) + M
    {
        for (j = 0; j < n; j++)                                             //M + M(N+1) + M*N
        {
            c[i][j] = a[i][j] + b[i][j];                                    //M*N
        }
    }

    cout << "The sum matrix is:\n";                                         //1
    for (i = 0; i < m; i++)                                                 //1 + (M+1) + M
    {
        for (j = 0; j < n; j++)                                             //M + M(N+1) + M*N
        {
            cout << c[i][j] << "  ";                                        //M*N
        }
        cout << endl;                                                       //M
    }
}                                                                           //Total steps: 12(M*N) + 17M + 22