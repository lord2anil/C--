#include <bits/stdc++.h>
using namespace std;

// learning oops

class Hero{

    public:
    int health;
    void set(int n){
        this->health=n;
    }

};
class Hero1{

    public:
    int health;
    void set(int n){
        this->health=n;
    }

};

class male :public Hero , public Hero1{
    public:
    int level;
    // void print(){
    // // cout<<Hero1::health<<endl;
    // }
};




signed main()
{
    male n;
   cout<< n.Hero::health;
    
    
  
    
    

    return 0;
}