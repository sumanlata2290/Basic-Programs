#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;
const int N = 3e5 + 10;
void test(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    // int initial = (s[0] == 'W');
    int W = 0;
    int ans = 0,ba = 0;
    for(int i = 0;i < n;i++){
        if(s[i] == 'L'){
            ba++;
        }
        if(s[i] == 'W'){

            if(i == 0 or s[i-1] != 'W'){
                ans++;
            }
            else{
                ans += 2;
            }
            W = 1;
        }
    }
    if(ba <= k){
        cout << 2*n - 1 << "\n";
        return;
    }
    int f = 0,c = 0;
    vector<int>tmp;
    for(int i = 0;i < n;i++){
        if(!f and s[i] == 'W'){
            f = 1;
        }
        if(f and s[i] == 'L'){
            c++;
        }
        if(f and s[i] == 'W' and c > 0){
            tmp.push_back(c);
            c = 0;
        }

    }
    sort(tmp.begin(),tmp.end());
    for(int i = 0;i < (int)tmp.size();i++){
        if(tmp[i] <= k){    
            k -= tmp[i];
            ans += 2*tmp[i] + 1;
        }
        else{
            break;
        }
    }
    if(!W){
       cout << max(2*k-1,0ll) << "\n"; 
       return;
    }
    else{
        ans += 2ll*k;
        cout << ans << "\n";
    }

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
