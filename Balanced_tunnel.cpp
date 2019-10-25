
// 1237 B - Balanced Tunnel.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define f(i,x,n) for(int i=x;i<n;i++)
#define all(c) c.begin(),c.end()
#define int ll
using ll = long long;
using pii = pair<int,int>;
const int MOD = 1e9+7, N = 1e5 + 10; 

int tt[N];

int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin >> n;
   vector<pii> a(n);
   f(i,0,n){
      cin >> a[i].F;
   }
   f(i,0,n){
      cin >> a[i].S;
      tt[a[i].S] = i+1;
   }
   set<int> s;
   int ans = 0;
   f(i,0,n){
      auto kk = s.lower_bound(tt[a[i].F]);
      if(kk != s.end()){
         ans++;
      }
      s.insert(tt[a[i].F]);
   }
   cout << ans << '\n';
   return 0;
}
