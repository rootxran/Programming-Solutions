#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int m, n;
    // cin >> m >> n;
    // int arr[m][n];
    // int x = 0;
    // for(int i = 0; i < m; )
    // {
    //     for(int j = 0; j < n; )
    //     {
    //         if((m - i)% 2 == 0)
    //         {
    //             j++;
    //             x++;
    //         }
    //         else
    //         {
    //             if((n - (j+1)) % 2 != 0)
    //             {
    //                 break;
    //             }
    //             else
    //             {
    //                 x++;
    //             }
    //             j = j + 2;
    //         }
    //     }
    //     if((m - i + 1)%2 == 0)
    //     {
    //         i = i + 2;
    //         // m = m - 2;
    //     }
    //     else
    //     {
    //         i++;
    //         // m = m - 1;
    //     }
    // }
    // cout << x;
    int M, N;
    cin >> M >> N;
    cout << M * N / 2 << endl;
}