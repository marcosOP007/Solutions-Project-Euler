#include <bits/stdc++.h>

using namespace std;


#define int long long

vector<int> Primes = {2,3,5,7,11,13,17};
int resp = 0;

bool isPandigital(int n){
    string numbers = to_string(n);
    int numb = 0;
    
    string k = "";
    for(int i = 0; i < 7; i++){
        
        k += numbers[i+1];
        k += numbers[i+2];
        k += numbers[i+3];
        stringstream ad(k);
     	int b;
	    ad >> b;

        if(b%Primes[i] != 0)
            return false;
        k = "";
    }

    resp += n;
    return true;
}

void permute(string &a, int l, int r){
   
    if (l == r){
	    stringstream ac(a);
     	int b;
    	ac >> b;
    	isPandigital(b);
    }else{
        for (int i = l; i <= r; i++)
        {
            swap(a[l], a[i]);
            permute(a, l+1, r);
            swap(a[l], a[i]);
        }
    }
}


int32_t main() {
    string a = "1234567890";
    permute(a,0,9);
    
    
    cout << resp;
   
    return 0;
}