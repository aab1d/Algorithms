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
    for (i = 0; i < m; i++)                                                 //1 + (N+1) + N
    {
        for (j = 0; j < n; j++)                                             //N + N(N+1) + N*N
        {
            cin >> a[i][j];                                                 //N*N
        }
    }

    cout << "Enter the elements of array B(row-wise):\n";                   //1
    for (i = 0; i < m; i++)                                                 //1 + (N+1) + N
    {
        for (j = 0; j < n; j++)                                             //N + N(N+1) + N*N
        {
            cin >> b[i][j];                                                 //N*N
        }
    }

    //Adding the matricies
    for (i = 0; i < m; i++)                                                 //1 + (N+1) + N
    {
        for (j = 0; j < n; j++)                                             //N + N(N+1) + N*N
        {
            c[i][j] = a[i][j] + b[i][j];                                    //N*N
        }
    }

    cout << "The sum matrix is:\n";                                         //1
    for (i = 0; i < m; i++)                                                 //1 + (N+1) + N
    {
        for (j = 0; j < n; j++)                                             //N + N(N+1) + N*N
        {
            cout << c[i][j] << "  ";                                         //N*N
        }
        cout << endl;                                                       //N
    }
}                                                                           //Total steps: 12(N*N) + 17N + 22