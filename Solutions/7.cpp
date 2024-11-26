#include <bits/stdc++.h>

using namespace std;


bool isPrime(int n){
    
    for(int i = 3; i*i <= n; i+=2){
        if(n%i == 0)
            return false;
    }
    
    return true;
}

int main() {
    
    int resp = 1;
    
    for(int i = 3; resp != 10001; i+=2){
        if(isPrime(i))
            resp++;
        if(resp == 10001)
            cout << i;
    }
    
    return 0;
}