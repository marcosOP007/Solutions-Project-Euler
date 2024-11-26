#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main() {
    
    
    int init = 1, end = 3000,resp = 999999999999;
    vector<pair<int,int>> lista;
    map<int,bool> mapa;
    
    for(int n = init;n <= end; n++){
        const int atual = n*(3*n-1)/2;

         for(auto &i : mapa)
             if(mapa.count(atual-i.first) && (atual-i.first) < resp)
                 lista.push_back({atual,i.first});
        mapa[atual] = true;
    }
 	  
    
    for(auto &par : lista)
       if(mapa.count(par.first+par.second) && (par.first-par.second) < resp)
	    resp = (par.first-par.second);


    cout << "RESP: " << resp;

    return 0;
    
}