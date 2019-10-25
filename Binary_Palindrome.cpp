#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define int ll
#define f(i,x,n) for(int i=x;i<n;i++)
#define all(c) c.begin(),c.end()
using ll = long long;
using pii = pair<int,int>;
const int MOD = 1e9+7, N = 1e5 + 10;
 
void test(){
   int n;
   cin >> n;
   int t[2] = {0,0};
   vector<string> s(n);
   vector<pii> a;
   int o=0,e=0;
   f(i,0,n){
      cin >> s[i];
      if((int)s[i].length() & 1) o++;
      else e++;
      f(j,0,(int)s[i].length()){
         t[0] += (s[i][j]=='0');
         t[1] += (s[i][j]=='1');
      }
   }
   int ans;
   t[0] = t[0]%2;
   t[1] = t[1]%2;
   if(t[0] == t[1]){
      if(o%2==0 and o!=0){
         ans = n;
      }else{
         ans = n-1;
      }
      if(t[1]==0 and o==0) ans++;
   }else{
      if(o%2==0) ans=n-1;
      else ans = n;
   }
   cout << ans << '\n';
   return;
}

int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int tt = 1;
   cin >> tt;
   f(i,0,tt) test();   
   return 0;
}
