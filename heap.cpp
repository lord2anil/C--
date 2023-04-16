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
    struct heap
    {
        public:
        int arr[100];
        int size;
        heap(){
            arr[0]=-1;
            size=0;
        }

        void insert(int val){
            size++;
            int index=size;
            arr[index]=val;
            int parent=index/2;
            while (index>1)
            {
                if(arr[parent]<arr[index]){
                    swap(arr[parent],arr[index]);
                    index=parent;
                }
                else{
                    return;
                }
            }
            
        }

        void print(){
            for (int i = 1; i <=size; i++)
            {
                /* code */cout<<arr[i]<<" ";
            }
            
        }


        void deletefrom(){
            if(size==0){
                cout<<"there is no element in heap to delete"<<" ";
                return;
            }
            arr[1]=arr[size];
            size--;
            int i=1;

            while (i<size)
            {
                int leftnode=i/2;
                int rightnode=i/2+1;
                if(leftnode<size and arr[i]<arr[leftnode]){
                    swap(arr[i],arr[leftnode]);
                    i=leftnode;
                }
                else if(rightnode<size and arr[i]<arr[rightnode]){
                    swap(arr[i],arr[rightnode]);
                   i=rightnode;
                }
                else{
                    return;
                }

            }
            
        }





    };




    void heapify(int a[],int n,int i){
        int largest=i;
        int left=2*i;
        int right=2*i+1;
        if(left<n and a[largest]<a[left]){
            largest=left;

        }
        if(right<n and a[largest]<a[right]){
            largest=left;

        }
        if(largest!=i){
            swap(a[largest],a[i]);
            heapify(a,n,largest);
        }




    }
    
int main(){
    heap h;
    // h.insert(34);
    // h.insert(64);
    // h.insert(67);
    // h.insert(79);
    // h.insert(45);
    // h.print();
    // cout<<endl;  
    // h.deletefrom();
    // h.print();

int a[6]={-1,54,53,55,52,60};
int n=5;
for (int i = n/2; i >0; i--)
{
    /* code */heapify(a,n,i);
}
// for (int i = 1; i <=5; i++)
// {
//     /* code */h.insert(a[i]);
// }
// h.print();
// cout<<endl;



for (int i = 1; i <=n; i++)
{
    /* code */cout<<a[i]<<" ";
}






return 0;
}


