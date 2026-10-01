#include<bits/stdc++.h>
using namespace std;
bool ArmstrongNumber(int n){
    int temp=n;
    long long sum=0;

    while(temp>0){
        int dig=temp%10;
        temp=temp/10;
        sum=sum+dig*dig*dig;

    }

    if(sum==n){
        return true;
    }else{
        return false;
    }



}
int main(){
    int n;
    cin>>n;

    if(ArmstrongNumber(n)){
        cout<<"(bool)true";  

    }else{
        cout<<"(bool)false";
    }

    return 0;
}