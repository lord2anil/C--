#include <iostream>
using namespace std;


    int main()
{

    int n;
    cin>>n;

    for (int i = 2; i <n; i++)
    {
        /* code */if (n%i==0)
        {
            /* code */cout<<"this is not a prime number"<<endl;
            break;
        }
        else
        cout<<" this is prime number";
        break;
    }
    
    
    return 0;
}