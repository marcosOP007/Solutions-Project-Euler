#include <bits/stdc++.h>

using namespace std;


int main() {
    
    
    long long resp = 2, ant_ant = 1, ant = 2,atual=0;
    
    while(true){
        atual = (ant_ant + ant);
        
         if(atual > 4000000)
            break;
            
        if(atual%2 == 0){
            resp += atual;
        }
        ant_ant = ant;
        ant = atual;
    }
    cout << resp;
    
    return 0;
}