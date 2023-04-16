#include <bits/stdc++.h>
using namespace std;
bool is_rational(long double x) {
    x = abs(x);
    for (int i = 0; i < 20; ++i) {
        const auto a = floor(x);
        if (x - a < 1e-8)
            return true;
        x = 1 / (x - a);
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, f = 0;
        cin >> a >> b;
        long double  r=(log(a))/(log(b));
        if(is_rational(r))
          cout<<"YES"<<endl;
        else
          cout<<"NO"<<endl;
    }
    return 0;
}
