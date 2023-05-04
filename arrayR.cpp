#include<bits/stdc++.h>

using namespace std;
void rot(int a[],int k, int n){
    int b[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        b[(i+k)%n]=a[i];
    }t
    for (int i = 0; i < n; i++)
    {
        cout<<b[i];
        
    }
    
    


} 


 
int main(){
    int a[4]={3,5,6,8};
    
   
  

    rot(a,2,4);
   
   

return 0;
}