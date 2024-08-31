#include <bits/stdc++.h>
#include<iostream>

using namespace std;

// void swap(int &a,int &b){
//     int t;
//     t=a;
//     a=b;
//     b=t;
// }
// void sort(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; i < n - i - 1; j++)
//         {
//             if (a[j] > a[j + 1])
//             {
//                 swap(a[j], a[j + 1]);
//             }
//         }
//     }
// }

void Sort(int A[], int n) {
int flag , k , i, temp;
 //Outer loop
 for( k=1; k<n ; k++)
 {
  flag = 0;
   //inner loop
   for( i=0 ; i<n-k ; i++)
   {
    if(A[i] >A[i+1])
    {
    //swapping
    temp = A[i];
    A[i] = A[i+1];
    A[i+1] = temp;
    //setting flag to 1
    flag = 1;
    }
   }
  // if flag==0 means no swaps i.e. array is sorted
  if(flag == 0 )
  break;
  }
}



int main()
{
    int t;
    int n;
    int a[n];
   

    int sum;
    sum=0;
     cin>>t;
   
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

     Sort(a, n);
    
      for (int i = 0; i < n; i++)
      {
      sum = sum+ a[i+1]-a[0];
      }
    
    cout<<sum;
    

    return 0;
}