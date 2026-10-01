#include<bits/stdc++.h>
using namespace std;
bool perfect(int n){
    int i=1;
    int sum =0;
    while(i<n){
        if(n%i==0){
            sum=sum+i;
        }
            i++;
        
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
    if(perfect(n)){
        cout<<"true";
    }else{
        cout<<"false";
    }

    return 0;
}
