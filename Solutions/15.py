#include <bits/stdc++.h>

using namespace std;

unsigned long long mat[21][21];

unsigned long long pe (int a, int b){
    
    if(mat[a][b+1] == 0)
        pe(a, b+1);
    if(mat[a+1][b] == 0)
        pe(a+1, b);
    
    return mat[a][b] = mat[a][b+1]+mat[a+1][b];
}


int main() {
    
    
    for(int i = 0; i <= 20; i++){
        mat[i][20] = 1;
        mat[20][i] = 1;
    }
    
    
    
    
    cout << pe(0,0);
    
    return 0;
}