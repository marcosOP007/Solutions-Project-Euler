#include <bits/stdc++.h>
#define ll long long
#define maxn 10100
#define pii pair<int,int>
#define pb push_back

using namespace std;

ll fat(ll n){
   ll num = 1;
   
   for(ll i = 2; i <= n; i++){
      num *= i;
   }
  return num;
}


bool isD(ll n){
  ll num = n, som = 0;
  
  while(num > 0){
    ll dig = num%10;
    num /= 10;
    
    som += fat(dig);
  }
  
  return (som == n);
}

int32_t main(){

  ll resp= 0;
  
  

  
  for(ll i = 3; i <= 4000000; i++){
       if(isD(i))
          resp += i;
  }
  
  cout << "RESP: " << resp;

	return 0;

}