#include <bits/stdc++.h>

using namespace std;

int main() {
    
    for(int i = 1; i <= 1000; i++)
        for(int j = 1; j <= 500; j++)
            for(int k = 1; k <= 300; k++)
                if(i+j+k == 1000 && pow(i,2) == pow(j,2)+pow(k,2)){
                    cout << i*j*k << endl;
                     break;
                }
        
    return 0;
}