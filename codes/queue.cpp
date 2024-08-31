#include<bits/stdc++.h>

using namespace std;
#define n 20

class queu{
    int*arr;
    int f;
    int b;
    public:
    queu(){

        arr=new int[n];
        f=-1;
        b=-1;
    }


void push(int x){
    if (f==-1)
    {
        /* code */f++;
        arr[f]=x;
    }
    b++;
    arr[b]=x;
    
}
void pop(){

    cout<<arr[b];
}


};



int main(){

class queu s;
s.push(3);
s.push(4);
s.push(4);
s.push(5);
s.push(6);
s.pop();

return 0;
}