#include <bits/stdc++.h>

using namespace std;

#define int long long


int32_t main() {
    
    int init = 165, end  = 1000000;
    
    map<int,bool> Triangle, Pentagonal,Hexagonal;
    for(int i = init; i < end; i++){
        Triangle[i*(i+1)/2] = true;
        Pentagonal[i*(3*i-1)/2] = true;
        Hexagonal[i*(2*i-1)] = true;
    }
    
    for(auto [k,v] : Hexagonal){
        if(Triangle[k] == true && Pentagonal[k] == true){
            cout << k << endl;
            break;
        }
    }        
    
    return 0;
}