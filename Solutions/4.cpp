#include <bits/stdc++.h>

using namespace std;


bool isPalindrome(string a){
    int size = (int)a.size();
    
    for(int i = 0; i < size/2; i++)
        if(a[i] != a[size-i-1])
            return false;
    return true;
}

int main() {
    
    int  a = 0, resp=0;
    
    for(int i = 100; i <= 999; i++){
        for(int j = 100; j <= 999; j++){
            a = i * j;
            string b = to_string(a);
            if(isPalindrome(b) && stoi(b) > resp){
                resp = stoi(b);
            }
        }   
    }
    
    cout << resp;
    
    
    return 0;
}