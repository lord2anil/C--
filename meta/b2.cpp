#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <array>
using namespace std;
using std ::max;
using std ::min;
#include <set>
using std::pair;

using std::array;
#include <algorithm>
#include <functional>
#define ll long long int

typedef unsigned long long ull;
// typedef pair<int, int> pii;
// typedef vector<int> vi;
// typedef vector<string> vs;
// typedef vector<pii> vii;
// typedef vector<vi> vvi;
// typedef map<int, int> mpii;
// typedef set<int> seti;
// typedef multiset<int> mseti;
typedef tuple<int, int, int> State;

// template <class T>  inline void chmax(T &x,T &y) {if(x < y) swap(x,y);}
// template <class T>  inline void chmin(T &x,T &y) {if(x > y) swap(x,y);}

/*----------------------Graph Moves----------------*/
int dx[4] = {+1, -1, +0, +0};
int dy[4] = {+0, +0, +1, -1};
// const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
// const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
// const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
// const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/

const int MOD = 1e9 + 7;

// gcd
ll GCD(ll A, ll B)
{
  if (B == 0)
    return A;
  else
    return GCD(B, A % B);
}

int seTBits(int n)
{
  // base case
  if (n == 0)
    return 0;
  else
    // if last bit set add 1 else add 0
    return (n & 1) + seTBits(n >> 1);
}

char b[3002][3002];
bool check(int r, int c, int n, int m)
{

  int ans = 0;
  for (int i = 0; i < 4; i++)
  {
    /* code */ if (b[r + dx[i]][c + dy[i]] == '^' && r + dx[i] >= 0 && r + dx[i] < n && c + dy[i] >= 0 && c + dy[i] < m)
    {
      ans++;
    }
  }
  if (ans >= 2)
  {
    return 1;
  }

  return 0;
}

const int N = 1e7;
// "Case #"<<t-T<<": "<<
int main()
{

  ll T;

  cin >> T;
  int t = T;
  while (T--)
  {
    int r, c;
    cin >> r >> c;
    char a[r][c];
    // char b[r][c];
    bool p = 0;
    for (int i = 0; i < r; i++)
    {
      /* code */ for (int j = 0; j < c; j++)
      {
        
        /* code */ cin >> a[i][j];
       
        if (a[i][j] == '^')
        {
          p = 1;
        }
      }
    }
 for (int i = 0; i < r; i++)
    {
      /* code */ for (int j = 0; j < c; j++)
      {
        b[i][j]=a[i][j];
      }
    }

    


    for (int i = 0; i < r; i++)
    {
      /* code */ for (int j = 0; j < c; j++)
      {
        if (b[i][j] == '.')
        {
          b[i][j] = '^';
        }
      }
    }

    if ((c == 1 && p == 1) || (r == 1 && p == 1))
    {
      cout << "Case #" << t - T << ": "
           << "Impossible" << endl;
      //
    }
    else if (p == 0)
    {
      cout << "Case #" << t - T << ": "
           << "Possible" << endl;
      for (int i = 0; i < r; i++)
      {
        /* code */ for (int j = 0; j < c; j++)
        {
          /* code */ cout << a[i][j];
        }
        cout << endl;
      }
    }

    else
    {
      bool f = 1;
      for (int i = 0; i < r; i++)
      {
        /* code */ for (int j = 0; j < c; j++)
        {
          if (b[i][j] == '^')
          {
            if (check(i, j, r, c) == 0)
            {
              f = 0;
              break;
            }
          }
        }
      }

        if (f == 1)
        {
          cout << "Case #" << t - T << ": "
               << "Possible" << endl;
          for (int i = 0; i < r; i++)
          {
            /* code */ for (int j = 0; j < c; j++)
            {
              /* code */ cout << b[i][j];
            }
            cout << endl;
          }
        }
        else
        {

          cout << "Case #" << t - T << ": "
               << "Impossible" << endl;
        }
      
    }
  }

  return 0;
}