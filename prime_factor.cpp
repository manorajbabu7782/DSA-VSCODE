#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=2;
    while(i<=n){
    if (n%i==0){
        n=n/i;
        cout<<i<<" ";
    }else{
        i++;
    }
}
return 0;
}