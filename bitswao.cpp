#include<bits/stdc++.h>

using namespace std;

void swap(int a,int b){
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<"/0"<<b;

}
int main(){
    swap(2,3);

return 0;
}