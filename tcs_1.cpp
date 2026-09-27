#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums;
    cin>>nums;
    int count=0;
    while(nums>0){
        (nums=nums/10);
        count++;
        
    }
    cout<<count;
    return 0;

    
}


    
