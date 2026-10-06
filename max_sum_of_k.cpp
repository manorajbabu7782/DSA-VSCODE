#include<bits/stdc++.h>
using namespace std;
int SumMax(vector<int>&nums ,int k){
    int l=0;
    int r=k-1;
    int sum=0;

    for(int i=l;i<k;i++){
        sum+=nums[i];
    }

    int ans=sum;
    while(r<nums.size()-1){ 
       
        
        l++;
        r++;
        sum-=nums[l-1];
        sum+=nums[r];

        ans=max(ans,sum);
    }
        
        return ans;
    }


int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int result=SumMax(nums,k);
    cout<<result;
    
}
    

