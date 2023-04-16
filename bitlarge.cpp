#include<bits/stdc++.h>

using namespace std;
#define ll long long int
ll pw(ll a,ll b){
ll ans=1;
while (b)
{if (b&1)
{
    /* code */ ans=ans*a;
}
a=a*a;
b>>=1;


}



// large a ,   

int binexp( ll a,ll b){
    ans=1;
    while (b>0)
    {
        /* code */if (b&1)
        {
            /* code */ans=bitmulti(ans,a);
        }
        a=bitmulti(a,a);
        b>>=1;
    }
    
}


// multiply of large numbers
ll bitmulti(ll a,ll b){
    int ans=0;
    while (b>0)
    {
        /* code */ans=(ans+a)%MOD;
    }
    a=(a+a)%M;
    b>>=1;
}

return ans;

}
int main(){

cout<<pw(34,57);


return 0;
}