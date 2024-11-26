#include <bits/stdc++.h>

using namespace std;


bool isPrime(long long n){
    for(long long i = 3; i*i <= n; i+=2){
        if(n%i == 0)
            return false;
    }
    return true;
}


int main() {
    
    long long number = 600851475143;
    
    for(long long i = 3; i <= number; i+=2){
        if(number%i == 0 && isPrime(i)){
            number/= i;
            cout << i << ' ';
        }
    }

    return 0;
}