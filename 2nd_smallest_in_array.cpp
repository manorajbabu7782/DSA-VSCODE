#include<bits/stdc++.h>
using namespace std;

int SecondSmallest(vector<int>&nums){
    int smallest=INT_MAX;
    int secondsmallest=INT_MAX;

    for(int i=0;i<nums.size();i++){
        if(nums[i]<smallest){
            secondsmallest=smallest;
            smallest=nums[i];
        }else if(nums[i]<secondsmallest && nums[i]!=smallest){
            secondsmallest=nums[i];
        }
    }
    return secondsmallest;
}
int main(){
    int n;
    cin>>n;

    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<SecondSmallest(nums);

    return 0;
}
