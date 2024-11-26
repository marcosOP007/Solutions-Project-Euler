#include <bits/stdc++.h>

using namespace std;

bool valid(int n){
    for(int i = 2; i <= 20; i++)
        if(n%i != 0)
            return false;
    return true;
}

int main() {

    long long number = 20;
    while(1){
        if(valid(number))
            break;
        number+=2;
    }
    
    cout << number;
    
    return 0;
}