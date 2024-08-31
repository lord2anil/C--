#include <bits/stdc++.h>

using namespace std;
int main()
{

    int n = 4;
    //  cin>>n;
    int s = 2 * n - 1;

    for (int i = n; i >= 1; i--)
    {
        /* code */
        if ((2 * n - 1) < s)
        {
            /* code */ cout << n + 1;
        }

        for (int i = 0; i < 2 * n - 1; i++)
        {
            cout << n;
        }
        if ((2 * n - 1) < s)
        {
            /* code */ cout << n + 1;
        }

        cout << endl;

        n--;
    }

    return 0;
}
