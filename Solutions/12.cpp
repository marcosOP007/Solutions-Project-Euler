#include <bits/stdc++.h>

using namespace std;


typedef long long ll;


ll countDivisors(ll n){
    ll cnt = 0;
    for (ll i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            if (n / i == i)
                cnt++;
            else 
                cnt += 2;
        }
    }
    return cnt;
}
int32_t main() {
    
    ll atual = 1, cont=2, divisors;
  
    while(true){
        atual += cont;
        cont++;
        divisors = countDivisors(atual);
        
        if(divisors > 500){
            cout << atual;
            break;
        }
    }
   
 
    return 0;
}