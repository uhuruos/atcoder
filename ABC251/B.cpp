// ABC251-B
#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
#define all(x) (x).begin(), (x).end()
const int INF = 1e9;
const long long infl = 1LL << 60;
const int mod = 998244353;
const int MOD = 1e9 + 7;
const double PI = 3.141592653589;
using namespace std;
template <class T> bool chmax(T &a, const T &b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T> bool chmin(T &a, const T &b) {
  if (b < a) {
    a = b;
    return 1;
  }
  return 0;
}
using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;
using Dp = vector<vector<ll>>;
/**
 *    cout<<fixed<<setprecision(10)<<endl;
 *      ・sortからのlower_bound
 */

int main() {
  int N, W;
  cin >> N >> W;
  vector<int> A(N);
  rep(i, 0, N) cin >> A[i];
  set<int> st;
  rep(i, 0, N) {
    if (A[i] <= W) {
      st.insert(A[i]);
    }
  }
  rep(i, 0, N) {
    rep(j, i + 1, N) {
      if (A[i] + A[j] <= W) {
        st.insert(A[i] + A[j]);
      }
    }
  }
  rep(i, 0, N) {
    rep(j, i + 1, N) {
      rep(k, j + 1, N) {
        if (A[i] + A[j] + A[k] <= W) {
          st.insert(A[i] + A[j] + A[k]);
        }
      }
    }
  }
  cout << st.size() << endl;
  return 0;
}