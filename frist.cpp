#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        int n;
        cin >> n;
        int i = 1, len = 0;
         while (len < n) {
            len += i * 26;
            i++;
        }
         i--;
        len -= i * 26;
        n -= len;
        int k = n % i;
        if (k == 0) k = i;
        int c = (n - 1) / i;
        char ans = 'A' + c;
        cout << "Case #" << t << ": " << ans << endl;
    }
    return 0;
}
