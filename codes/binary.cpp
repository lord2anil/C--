#include<bits/stdc++.h>

using namespace std;

void print (int num){
    for (int i = 10; i >=0; --i)
    {
        cout<<((num>>i)&1);
    }
    
}
int main(){

    print(2);
    int a=4;
    if (a & 1==1)
    {
        /* code */cout<<"odd";
    }
    else{
        cout<<"even";
    }


return 0;
}