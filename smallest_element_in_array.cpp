#include<bits/stdc++.h>
using namespace std;
int SmallestNumber(vector<int>& nums){
    int mini =INT_MAX;
    for (int i=0;i<nums.size();i++){
        mini=min(mini,nums[i]);
    }
    return mini;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    int mini=INT_MAX;

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int rl=SmallestNumber(nums);
    cout<<rl;
}
    