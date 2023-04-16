#include <bits/stdc++.h>

using namespace std;

// void sort1(int A, int n)
// {
  


//             	sort(A.begin(),A.end());
            
            
    
// }

int main()
{

    vector<int> A = {1, 8, 4, 6};
   int n=4;
   sort(A.begin(),A.end()); 
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
        cout << "\n";
    }

    return 0;
}