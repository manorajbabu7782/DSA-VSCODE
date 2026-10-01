#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp=n;
    long long rev=0;

    while(n>0){
        int dig =n%10;
        rev=rev*10+dig;
        n=n/10;
    }

    if(temp==rev){
        cout<<"pallindrome";

    }else{
        cout<<"npt paalindrome";
    }
    return 0;

}