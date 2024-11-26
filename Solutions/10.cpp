#include <bits/stdc++.h>

using namespace std;


bool isPrime(long long n){
    for(int i = 3; i * i <= n; i+=2)
        if(n%i == 0)
            return false;
    return true;
}

int main() {
    
    long long sum = 2;
    
    
    for(long long n = 3; n < 2000000;n+=2)
        if(isPrime(n))
            sum += n;
    
    
    cout << sum;
    
    return 0;
}