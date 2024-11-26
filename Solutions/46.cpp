#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

vector<ll> Primes = {2};
map<ll, bool> mapa; 

bool isPrime(int n){
    
    for(int i = 3; i*i <= n; i+=2){
        if(n%i == 0)
            return false;
    }
    
    return true;
}


int main() {
    
    ll init = 1;
    
    for(ll i = 3; i <= 10000; i+=2)
        if(isPrime(i) == true)
            Primes.push_back(i);

    for(auto i : Primes){
        for(ll j = 1; j <= 1000; j++){
              mapa[i + 2*j*j] = true;
        }
    }
    for(ll i = 3; i <= 100000; i+=2){
        if(mapa[i] == false && isPrime(i) == false){
            cout << i;
            return 0;
        }
    }

    return 0;
}