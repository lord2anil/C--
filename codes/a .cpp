#include<iostream>

using namespace std;
int main(){
string a;
cin>>a;
for ( i = 0; i < a.size(); i++)
{
    if (a[i]=='.')
    {
        cout<<0;
    }
     if (a[i]=='-'&&a[i+1]=='.')
    {cout<<1;
    }
   if (a[i]=='-'&&s[i+1]=='-')
   {cout<<2;
   }
   

    
}

return 0;
}