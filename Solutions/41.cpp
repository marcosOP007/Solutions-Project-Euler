#include <bits/stdc++.h>

using namespace std;


#define int long long


bool isPrime(int n){
    
    for(int i = 3; i*i <= n; i+=2){
        if(n%i == 0)
            return false;
    }
    
    return true;
}


bool isPandigital(int n){
    if(not isPrime(n))
        return false;
    
    string numbers = to_string(n);
    map<char,bool> mapa; 
    
    for(auto number : numbers){
        if(number-'0' > (int)numbers.size() || mapa[number] == true || number == '0')
            return false;
        mapa[number] = true;
    }
    return true;
}


int32_t main() {
    int resp;
    
    
    for(int i = 99999999; i >= 0; i-=2){
        if(isPandigital(i)){
            resp = i;
            break;
        }
            
    }
    cout << resp;
   
    
    return 0;
}