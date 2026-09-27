#include<bits/stdc++.h>
using namespace std;

vector<int> largest(vector<int>&nums){
    sort(nums.begin(),nums.end());
     int i=nums.size();
     for(i=0;i<nums.size();i++){
        cout<<nums[i];
     }
}

int main(){
    int n;
    cin>>n;

    vector<int> nums(n);
    for( int i=0;i<n;i++){
        cin>>nums[i];
    }

    vector<int> l=largest(nums);
    for(int i=0;i<l.size();i++){
        cout<<nums[i]<<" ";
    }

}