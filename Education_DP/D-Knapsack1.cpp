//
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
/*memo[]===================================
   cout<<fixed<<setprecision(10)<<endl;
	・sortからのlower_bound

===========================================*/

signed main(){
	int n,w;
    ll ans=0;
    cin>>n>>w;
    vector<int> weight(n),v(n);
    rep(i,0,n){
        cin>>weight[i]>>v[i];
    }
    vector<vector<long long>> dp(101,vector<ll>(201010));
    rep(i,0,n)rep(j,0,w){
        chmax(dp[i+1][j],dp[i][j]);
        chmax(dp[i+1][j+weight[i]],dp[i][j]+v[i]);
    }
    rep(j,0,w+1)chmax(ans,dp[n][j]);
    cout<<ans<<endl;
	return 0;
}
