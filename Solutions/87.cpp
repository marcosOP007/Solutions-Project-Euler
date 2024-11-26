#include <bits/stdc++.h>


using namespace std;


bool isPrime(long long n){
    for(long long i = 3; i * i <= n; i+=2)
        if(n%i == 0)
            return false;
    return true;
}

int main() {
    
    
    set<long long> resp;
    vector<long long> primes = {0,2};
    
    for(long long i = 3; i < 10000; i+=2){
        if(isPrime(i) == true)
            primes.push_back(i);
    }
    for(long long i = 1; i < (long long)primes.size(); i++){
        for(long long j = 1; j < (long long)primes.size(); j++){
            for(long long k = 1; k < (long long)primes.size(); k++){
                if(pow(primes[i],2)+pow(primes[j],3)+pow(primes[k],4)<= 50000000){
                   resp.insert(pow(primes[i],2)+pow(primes[j],3)+pow(primes[k],4));            
                }else{
                    break;
                }
            }
        }
    }
    cout << resp.size();
    

    return 0;
}