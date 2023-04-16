#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long ans = 0; // using long long to avoid integer overflow
    sort(arr.begin(),arr.end());
    for (int i = 0; i < n; i++) {
        
        for (int j = i; j < n; j++) {
            
            ans += (arr[j]-arr[i]);
        }
    }
    cout << ans << endl;
    return 0;
}
