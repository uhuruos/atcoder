#include<bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i,a,b) for(int i=a;i<b;++i)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
const int INF = 1e9;
const int mod = 998244353;
const int MOD = 1e9+7;
using namespace std;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
using ll = long long;
using ld = long double;
using Glaph = vector<vector<int>>;
using Dp = vector<vector<ll>>;
/*memo[]===================================s
   cout<<fixed<<setprecision(10)<<endl;
	・sortからのlower_bound

===========================================*/

signed main ()
{
    int y;
    cin >> y;
    for (int i = y; i < 10000; i++) {
        if (i % 4 == 2) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}