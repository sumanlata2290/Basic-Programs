#include <bits/stdc++.h>
using namespace std;
#define int long long
#define f(i,a,b) for(int i = a;i < b;i++)
#define all(c) c.begin(),c.end()
const int MOD = 1e9 + 7;
const int N = 1e5 + 10;
void test(){
    int n,k;
    cin >> n >> k;
    vector<int>v(n);
    f(i,0,n){
        cin >> v[i];
    } 
    map<int,int>maps;
    for(auto s : v){
        maps[s]++;
    }
    if(k == 1){
        if(maps.size() > 1){
            cout << "-1\n";
            return;
        }
    }
    int ans = 1;
    int c = 1;
    for(int i = 1;i < n;i++){
        if(v[i] != v[i-1]){
            if(c == k){
                ans++;
                c = 1;
            }   
            c++;
        }
    }
    cout << ans  << "\n";
}  
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--){ 
        test(); 
    }  
    return 0;
}
