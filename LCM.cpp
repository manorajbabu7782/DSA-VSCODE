#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int temp=a*b;

    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
   
    int LCM=temp/a;
    cout<<LCM;

    
    return 0;


}