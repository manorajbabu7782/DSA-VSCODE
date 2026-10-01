#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n<2){
        return false;
    }
    int i=2;
    while(i<n){
        if(n%i==0){
           return false;
        }
        i++;
    }
    return true;
}
int main(){
    int n;
    cin>>n;

    bool found=false;
    int i=2;
    while(i<n){
    if(isprime(i) && isprime(n-i)){
        cout<<n<<"="<<i<<"+"<<n-i<<endl;
        found=true;
        break;
    }
    i++;

    }
    if (!found){
        cout<<"cannot be expressed as sum of two numbers";
    }
    
    return 0;
}
