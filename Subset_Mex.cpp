#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int N = 3e5 + 10;
void test(){
    int n;
    cin >> n;
    vector<int>v(200,0);
    for(int i = 0;i < n;i++){
        int c;
        cin >> c;
        v[c]++;
    } 
    auto get = [&](){
        for(int i = 0;i < 200;i++){
            if(v[i]){
                --v[i];
            }
            else{
                return i;
            }
        }
    };
    cout << get() + get() << "\n";
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
