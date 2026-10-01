#include<bits/stdc++.h>
using namespace std;
int count(int n){
    int count=0;

    while(n > 0){
        n=n/10;
        count++;

    }
    return count;

}
int main(){
    int n;
    cin>>n;
    int m=count(n);
    cout<<m;
    

}