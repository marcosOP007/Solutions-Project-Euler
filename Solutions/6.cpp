#include <bits/stdc++.h>

using namespace std;


int main() {

    long long a,b,n;
    
    n = 100;
    
    a = (n*(n+1)*(2*n+1))/6;
    b = pow(((n*(n+1))/2),2); 
    
    cout << (b-a);
    
    return 0;
}