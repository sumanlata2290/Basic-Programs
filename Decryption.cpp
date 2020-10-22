#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
void test(){
    int N;
    cin >> N;
    int n = N,nn = N;
    set<int>factors;
    for(int i = 2; i <= sqrt(n); i++){   
        if(n%i == 0){ 
            factors.insert(n/i);
            factors.insert(i);
            
        } 
    }  
    vector<int>factor(factors.begin(), factors.end());
    if(factors.size() == 2){
        if(__gcd(factor[0],factor[1]) == 1){
            for(auto s : factor){
                cout << s << " ";
            }
            cout << N << "\n";
            cout << "1\n";
            return;
        }
    }
    factor.push_back(N);
    vector<int>primes;
    for(int i = 2;i * i<= N;i++){
        if(N % i == 0){
            while(N % i == 0){
                N /= i;
            }
            primes.push_back(i);
        }
    }
    if(N > 1){
        primes.push_back(N);
    }
    vector<int>connect(primes.size());
    map<int,bool>taken;
    for(int i = 0;i < (int)primes.size();i++){
        int a = primes[i], b = primes[(i+1)%primes.size()];
        for(int j = 0;j < (int)factor.size();j++){
            if(!taken[factor[j]] and factor[j]%a == 0 and factor[j] % b == 0){
                taken[factor[j]] = 1;
                connect[i] = factor[j];
                break;
            }
        } 
    }
    for(int i = 0;i < (int)primes.size();i++){
        int a = primes[i];
        taken[a] = 1;
        cout << a << " ";
        for(int j = 0;j < (int)factor.size();j++){
            if(!taken[factor[j]]  and factor[j] % a == 0){
                cout << factor[j] << " ";
                taken[factor[j]] = 1;
            }
        }
        if(primes.size() > 1) {
            cout << connect[i] << ' ';
        }

    }
    cout << "\n0\n";
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
