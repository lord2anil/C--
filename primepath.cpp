#include <iostream>
#include <vector>
#include <array>
using namespace std;
using std ::max;
using std ::min;
#include <set>
#include <queue>

const int N = 100001;

int vis[N];
vector<int> adj[N];
int dis[N];
vector<int> primes;

bool isprime(int n)
{
    for (int i = 2; i * i <= n; i++)
        /* code */ if (n % i == 0) return false;
    
    return true;
}

bool isvalid(int a, int b)
{
    int cnt = 0;
    while (a > 0)
    {
        /* code */ if (a % 10 != b % 10){cnt++;}
        a /= 10;
        b /= 10;
    }

    if (cnt == 1)
        return true;
    else false;
}

void buildGraph()
{

    for (int i = 1000; i <= 9999; i++)
    {
        /* code */ if (isprime(i))
        {
            primes.push_back(i);
        }
    }

    for (int i = 0; i < primes.size(); i++)
    {
        /* code */ for (int j = i + 1; j < primes.size(); j++)
        {
            int a = primes[i];
            int b = primes[j];
            if (isvalid(a, b))
            {
                adj[a].push_back(b);
                adj[b].push_back(a);
            }
        }
    }
}

void bfs(int x)
{
    queue<int> q;
    q.push(x);
    vis[x] = 1;
    dis[x] = 0;
    while (!q.empty())
    {
        /* code */ int curr = q.front();
        q.pop();
        for (int child : adj[curr])
        {
            if (vis[child] == 0)
            {
                /* code */ q.push(child);
                dis[child] = dis[curr] + 1;
                vis[child] = 1;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)

    {int a,b;
        cin >> a >> b;
        for (int i = 1000; i <= 9999; i++)
        {
            /* code */ dis[i] = -1;
            vis[i] = 0;
        }

        bfs(a);
        if (dis[b] == -1)
        {
            cout << "Impossible" << endl;
        }
        else
        {
            cout << dis[b] << endl;
        }
    }
    return 0;
}