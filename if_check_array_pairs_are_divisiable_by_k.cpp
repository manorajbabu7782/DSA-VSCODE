#include<bits/stdc++.h>
using namespace std;
bool checkDivisibiality(vector<int>& arr,int k){
    unordered_map<int,int>freq;

    for(int i=0;i<arr.size();i++){
        int rem=arr[i]%k;

        if(rem<0){
            rem+=k;
        }
        freq[rem]++;
    }
    if(freq[0]%2!=0){
        return false; 
    }
    for(int rem=1;rem<k;rem++){
        int required = k-rem;
        if(freq[rem] != freq[required]){
            return false;
        }
        
    }
    return true;
}
int main(){
    int n;cin>>n;
    int k;cin>>k;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(!checkDivisibiality(arr,k) ){
        cout<<"false"<<endl;
    }else{
    cout<<"true"<<endl;
    }
}