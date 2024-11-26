#include <bits/stdc++.h>

using namespace std;

#define int long long

int power(int x, int y){
    int res = 1;
    while (y > 0) {
        if (y % 2 == 1)
            res = (res * x);
        y = y >> 1;
        x = (x * x);
    }
    return res;
}

bool valid(int n){
    int number = n, som = 0;
    
    
    while(number > 0){
        som += power(number%10,5);
        number /= 10;
    }
    
    return (som == n);
}


int32_t main() {
    
    int init=10, end=999999, resp = 0;
    
    for(int i = init; i <= end; i++){
        if(valid(i) == true)
            resp += i;
    }
    cout << resp;
    return 0;
}