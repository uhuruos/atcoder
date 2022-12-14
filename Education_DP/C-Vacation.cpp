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
	int n;cin>>n;
    vector<vector<int>> a(n,vector<int>(3));
    rep(i,0,n)rep(j,0,3)cin>>a[i][j];
    vector<vector<int>> dp(n,vector<int>(3));
    rep(i,0,3){
        dp[0][i]=a[0][i];
    }
    rep(i,1,n){
        dp[i][0]=a[i][0]+max(dp[i-1][1],dp[i-1][2]);
        dp[i][1]=a[i][1]+max(dp[i-1][0],dp[i-1][2]);
        dp[i][2]=a[i][2]+max(dp[i-1][0],dp[i-1][1]);
    }
    int ans = -1;
    rep(i,0,3){
        if(dp[n-1][i]>ans){
            ans=dp[n-1][i];
        }
    }
    cout<<ans<<endl;
	return 0;
}
