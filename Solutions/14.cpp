#include <bits/stdc++.h>

using namespace std;

map<long long,long long> memo;

long long recursive(long long n,long long counter){
   
    if(n == 1)
        return counter;
    if(memo[n] != 0)
        return memo[n];
        
    if(n%2 == 0)
        return  counter + (memo[n/2] = recursive(n/2, 1));
    else
        return counter + (memo[3*n+1] = recursive(3*n+1, 1));        
}

int main() {
    
    memo[1] = 0;
    pair<long long,long long> resp;
    
    for(long long i = 1; i <= 1000000; i++){
        memo[i] = recursive(i,1);
        
        if(memo[i] > resp.second){
            resp.first = i;
            resp.second = memo[i];
        }
        
       
    }
    
    cout <<  resp.first; 
    
    return 0;
}