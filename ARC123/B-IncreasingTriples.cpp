//
#include<bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i,a,b) for(int i=a;i<b;++i)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
const int INF = 1e9;
const long long infl = 1LL<<60;
const int mod = 998244353;
const int MOD = 1e9+7;
const double PI = 3.141592653589;
using namespace std;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;
using Dp = vector<vector<ll>>;
/*memo[]===================================
   cout<<fixed<<setprecision(10)<<endl;
	・sortからのlower_bound
 
===========================================*/
 
signed main(){
	int n;
	cin>>n;
	vector<int>a(n),b(n),c(n);
	rep(i,0,n)cin>>a[i];
	rep(i,0,n)cin>>b[i];
	rep(i,0,n)cin>>c[i];
	sort(all(a));
	sort(all(b));
	sort(all(c));
	int bx=0,cx=0;
	int ans=0;
	rep(i,0,n){
		chmax(bx,i);chmax(cx,i);
		while(bx < n && a[i] >= b[bx])bx++;
		while(bx < n && cx < n && b[bx] >= c[cx])cx++;
		if(bx < n && cx < n){
			++ans;
			bx++;
			cx++;
		}
	}
	cout<<ans<<endl;

	return 0;
}