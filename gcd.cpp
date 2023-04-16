#include<bits/stdc++.h>

using namespace std;
int gcd(int a,int b){
    int d;
    int div=a,dvi=b;

    if (a>b)
    {
       d=div%dvi;
       if (d!=0)
       {
           /* code */ div=d;
                dvi=a;
                gcd(div,dvi);
       }
       else{
           cout<<div;
       }
       


    }
    
}


int main(){

gcd(15,2);
return 0;
}