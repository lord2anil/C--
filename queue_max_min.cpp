// C++ program to find sum of all minimum and maximum
// elements Of Sub-array Size k.
#include<bits/stdc++.h>
using namespace std;



// Driver program to test above functions
int main()
{
	int arr[] = {2, -10, -1} ;
 int n=3;
   int k=3;
    deque<int>max(k);
    deque<int>min(k);
   //  deque<int>max;
   //  deque<int>min;

    for (int  i = 0; i < k; i++)
    {
      

        while(!max.empty()&& (arr[i]>=arr[max.back()])){
         max.pop_back();
        }
        while(!min.empty()&& (arr[i]<=arr[min.back()])){
         min.pop_back();
        }
         max.push_back(i);
         min.push_back(i);

    }
    
 int ans=0;
 ans+=arr[max.front()]+arr[min.front()];
// cout<<arr[max.front()]<<" "<<arr[min.front()];
cout<<ans<<endl;

 for (int i = k; i < n; i++)
 {
   

   while(!max.empty()&&max.front()<=i-k){
      max.pop_front();
   }
   while(!min.empty()&&min.front()<=i-k){
      min.pop_front();
   }


        if(!max.empty()&&arr[i]>=arr[max.back()]){
         max.pop_back();
        }
        if(!min.empty()&&arr[i]<=arr[min.back()]){
         min.pop_back();
        }
         max.push_back(i);
         min.push_back(i);


      ans+=arr[max.front()]+arr[min.front()];
    
 }
 



cout<<ans<<endl;



	return 0;
}
