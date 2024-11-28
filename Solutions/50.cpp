#include <bits/stdc++.h>
#define int long long

using namespace std;


vector<int> Primes = {2,3,5};

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}





int32_t main() {    

    int lengthMax = 0, resp = 0;



    for(int i = 7; i < 100000; i++){
        if(isPrime(i) == true){
            Primes.push_back(i);
        }
    }
    vector<int> prefixSom(Primes.size()+1,0);
    
    for(int i = 0; i < Primes.size(); i++){
        prefixSom[i+1] = prefixSom[i] + Primes[i];
    }
    
    for(int i = 0; i < Primes.size(); i++){
        for(int j = i; j < Primes.size(); j++){
            if((prefixSom[j+1] - prefixSom[i]) > 1000000) continue;
            if(isPrime(prefixSom[j+1] - prefixSom[i]) == true){
                if(lengthMax < j-i+1){
                    lengthMax = j-i+1;
                    resp = prefixSom[j+1] - prefixSom[i];
                }
            }
        }
    }

    cout << resp << '\n';
    
    
    return 0;
}