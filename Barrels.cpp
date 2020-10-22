#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;
const int N = 3e5 + 10;
void test(){
    int n,k;
    cin >> n >> k;
    vector<int>v(n);
    for(int i = 0;i < n;i++){
        cin >> v[i];
    }     
    sort(v.begin(),v.end());
    int ans = 0;
    for(int i = n-2;i >= 0 and k ;i--){
        v[n-1] += v[i];
        k--;
        v[i] = 0;
    }
    sort(v.begin(),v.end());
    ans = v[n-1] - v[0];
    cout << ans << "\n";

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
