#include<bits/stdc++.h>
using namespace std;

int mySqrt(int x){
int i=0;
int j=x;
int ans=0;
while (i<=j){
    int mid=i+(j-i)/2;
    if(1ll*mid*mid==x){
        return mid;
    }else if(1ll*mid*mid<x){
        ans=mid;
        i=mid+1;
    }else{
        j=mid-1;
    }
    
}
return ans;

}

int main(){
    int x;
    cin>>x;
    int c=mySqrt(x);
    cout<<c;

    
}
