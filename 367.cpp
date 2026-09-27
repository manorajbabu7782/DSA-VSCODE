#include<bits/stdc++.h>
using namespace std;
bool isPerfectSq(int num){
    int i=0;
    int j=num;
    while(i<=j){
        int mid= i+(j-i)/2;
        if (1ll*mid*mid==num){
            return true;
        }else if(1ll*mid*mid<num){
            i=mid+1;
        }
        else{
            j=mid-1 ;
        }
    }
    return false;
} 

int main(){
    int num;
    cin>>num;

    bool c=isPerfectSq(num);
}