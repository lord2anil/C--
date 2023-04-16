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
int binary(int n,int arr[],int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while (start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
      else{
        end=mid-1;
      }
      mid=start+(end-start)/2;
    }
    
return -1;
}


int main(){

return 0;
}