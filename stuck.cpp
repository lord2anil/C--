#include<bits/stdc++.h>

using namespace std;
#define n 100
class staack{

    int *arr;
    int top;
    public:

    staack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){

        if (top==n-1)
        {
            /* code */cout<<"overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;

        
    }
    void pop(){

        if (top==-1)
        {/* code */cout<<"no"<<endl;
        }
        
            
        top--;
        
    }

   int Top(){

        if(top==-1){
            return -1;
        }

        return arr[top];
    }
};


int main(){

  class staack st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  cout<<st.Top();
  


return 0;
}