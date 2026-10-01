#include<bits/stdc++.h>
using namespace std;
int MaxMin(int n){
    int maxi=0;
    int mini=9;

    while(n>0){
        int dig=n%10;
        n=n/10;
        if(dig>maxi){
            maxi=dig;
        }
        if(dig<mini){
            mini=dig;
        }

    }
    cout<<"maximum digit "<<maxi<<endl;
    cout<<"minimum digit "<<mini<<endl;

    return 0;

    

}int main(){
    int n;
    cin>>n;
    MaxMin(n);

    
    return 0;
}

