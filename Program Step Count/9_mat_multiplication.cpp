//This program gives the multiplication of two matricies with program steps.
#include <iostream>
#define MAX 10
using namespace std;                                    //Program steps:
int main()                                              //1
{
    int a[MAX][MAX];                                    //1
    int b[MAX][MAX];                                    //1
    int c[MAX][MAX];                                    //1
    int i, j, k;                                        //3
    int m, n, p, q;                                     //4

    cout << "Enter the size of matrix A:\n";            //1
    cin >> m >> n;                                      //2

    cout << "Enter the size of matrix B:\n";            //1
    cin >> p >> q;                                      //2

    if (n != p)                                         //1
    {
        cout << "Multiplication is not possible\n";     //1
    }
    else                                                //1
    {
        cout << "Enter mat A(row-wise):\n";             //1 
        for (i = 0; i < m; i++)                         //1 + (M+1) + M
        {
            for (j = 0; j < n; j++)                     //M + M(N+1) + M*N
            {
                cin >> a[i][j];                         //M*N
            }
        }

        cout << "Enter mat B(row-wise):\n";             //1
        for (i = 0; i < n; i++)                         //1 + (N+1) + N
        {
            for (j = 0; j < q; j++)                     //N + N(Q+1) + N*Q
            {
                cin >> b[i][j];                         //N*Q
            }
        }
        //Set the multiplication mat elements to 0.  
        for (i = 0; i < m; i++)                         //1 + (M+1) + M
        {
            for (j = 0; j < q; j++)                     //M + M(Q+1) + M*Q
            {
                c[i][j] = 0;                            //M*Q
            }
        }
        //Multiplying.
        for (i = 0; i < m; i++)                         //1 + (M+1) + M
        {
            for (k = 0; k < q; k++)                     //M + M(Q+1) + M*Q
            {
                for (j = 0; j < n; j++)                 //M*Q + M*Q(N+1) + M*Q*N
                {
                    c[i][k] += a[i][j] * b[j][k];       //M*Q*N
                }
            }
        }

        cout << "The multiplication matrix is:\n";      //1
        for (i = 0; i < m; i++)                         //1 + (M+1) + M
        {
            for (j = 0; j < q; j++)                     //M + M(Q+1) + M*Q
            {
                cout << c[i][j] << "  ";                //M*Q
            }
            cout << endl;                               //M
        }
    }                                                   //Total:
}                                                       //3(MNQ) + 3(NQ) + 3(MN)+ 10(MQ) + 4N + 16M + 33