#include <iostream>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int> a{{1, 4, 5, 8, 6}};
    bool largest = false;
    int max = a[0] ;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    cout << max;

    return 0;
}