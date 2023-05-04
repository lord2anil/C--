#include<bits/stdc++.h>

using namespace std;
#include <vector>
#include <array>
using namespace std;
using std ::max;
using std ::min;
#include <set>
using std::pair;
using std::array;
#include <algorithm>
#include <functional>
#define ll long long int
int main(){

    int a[2]={3,4};
    int n=2;
    int start=0;
    int end=n-1;
    int mid;
    int p=0;
    while (start<=end)
    {mid=(start+end)/2;
      if(a[mid]<a[0]){
        p=mid;
        end=mid-1;
      }else{
        start=mid+1;
      }
    }
    cout<<p;

return 0;
}