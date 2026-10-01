#include<bits/stdc++.h>
using namespace  std;
int febbo(int n){
    int a=0;
    int b=1;
    int c;

    int i=0;

    while(i<n){
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;

        i++;
    }
    return 0;


}
int main(){
    int n;
    cin>>n;

    febbo(n);

    return 0;


}

