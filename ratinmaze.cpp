#include<bits/stdc++.h>

using namespace std;
 bool issafe(int **a,int x, int y,int n,int**sola){
     if (a[x][y]==1 && x<n && y<n && x>0 &&y >0)
     {
         /* code */return true;
     }
     return false;
     
 }

 bool rat(int **a,int x, int y,int n,int**sola){
     if (issafe(a,x, y, n,sola))
     {
         /* code */sola[x][y]=1;
         if (rat(a,x, y, n,sola))
         {
             return true;
         }
         
     }
     


 }



int main(){

return 0;
}