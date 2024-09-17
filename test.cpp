#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n",
#define yes put("YES");
#define no put("NO");
#define ini(v) (v).begin(), (v).end()
#define GET_MACRO(_1, _2, _3,_4, NAME, ...) NAME
#define FOR1(len,itr) for (int itr = 0; itr < (len); ++itr)
#define FOR2(len,itr, var) for (int itr = var; itr < (len); ++itr)
#define FOR3(len,itr, var, step) for (int itr = var; itr < (len); itr += (step))
#define FOR(...) GET_MACRO(__VA_ARGS__, FOR3, FOR2, FOR1)(__VA_ARGS__)
#define print(v) for(auto &i : v){put1(i);} cout<<endl;
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/trie_policy.hpp>
//using namespace __gnu_pbds;
//template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;
/* oset<int>s:s.find_by_order(k):Kth element in "s",s.order_of_key(k):Number of item strictly lessthan k */
template<typename... T>
void put1(T&&... args) { ((cout << args << " "), ...);}
template<typename... T>
void put(T&&... args) { ((cout << args << " "), ...); cout<<'\n';}
/*----------------------Graph Moves----------------*/
int dx[4] = {+1, -1, +0, +0};
int dy[4] = {+0, +0, +1, -1};
// int dx[8]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
// int dy[8]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
// int dx[8]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//  int dy[8]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/
//Functions
vector<int>input(int n){vector<int>v;for (int i = 0; i < n; i++){int x;cin>>x;v.push_back(x);} return v; }
const int mod= 1e9 + 7;
// unsigned int NO_OF_BITS= sizeof(n) * 8;
void fuck(int T,int tNum){

}
signed main()
{ //ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 //for interective problems use fflush(stdout); int y; scanf("%d",&y); printf("? %d %d",a, b);
  /* stuff you should look for
 * WRITE STUFF DOWN, 
  * If you to think , dry run test cases while think , do not think without writing
  * if you code become lengthy you approach is wrong
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * DON'T GET STUCK ON ONE APPROACH
//    Many times the pattern in o/p is related to remainder with 4 , therefore make sure to check for it (Ex: in game ques for pattern, in binary logic/string ques for pos pattern ,etc)
// -1. Never Ignore The Constraints Section (can also be used to solve problems if they are limited)
// 0. Remember Pre Computation is always helpful
// 1. If WA comes and you are sure about the solution, then check the constraints & edge cases.
// 2. If too many people have solved a question you are stuck on, then always remember: The solution is
//    100% easy and you need to calm down and think EASY, nothing complicated.
// 3. Read the question again after getting two wrong submissions. You are 100% missing something important
//    in the question.
// 4. If TLE comes in question, then check if one of the test cases generate infinite output.
//    It will give TLE.
// 5. If question looks unsolvable from front, try going from back. Works mostly from the back.
// 6. Stuck on implmentation? Think and then implement Data Structures that best fit the q like set,maps,stacks,queue.
// 7. Agar Question pe stuck ho and primary logic nahi aa raha dimaag mae then test case se ek pattern deduce karne ka try karo
// 8. Often Parity Is A good factor for obervation or computation
// 9. Math type questions mein bohot baar logic/pattern binary/2 ki powers se juda hua hota h ,Ex- See binary expansion of i/p and o/p
//    ; See occurence of some o/p @ some intervals which may be related to bits/powers of 2
//     or see how much times a particular value is divisible by 2
// 10.Many Times pattern/answer is related with some special numbers (min,max,both min&max, total sum ,
//    two i/p x and y of large range then ans related with some operation between x and y && same with 3 no i/p)
 */
  // #ifndef ONLINE_JUDGE
  //freopen("input.txt","r", stdin);
  //freopen("output.txt","w", stdout);
  // #endif
  int T;
  int t;
  cin>>T;
  t = T;
  while (T--)
  { fuck( t, t-T ); }
  // cout<<fixed<<setprecision(10);
  // cerr<<"Time:"<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<" ms\n";
  return 0;}