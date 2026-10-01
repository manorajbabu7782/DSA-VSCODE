#include<bits/stdc++.h>
using namespace std;
int LargestNumber(vector<int> &nums){
    int maxi=INT_MIN;
    for(int i=0;i<nums.size();i++){
        maxi=max(maxi,nums[i]);

    }
    return maxi;
}
int main (){
    int n;
    cin>>n;

    vector<int> nums(n);
    int maxi=INT_MIN;
    for (int i=0;i<n;i++){
        cin>>nums[i];
    }

    int rl=LargestNumber(nums);
    cout<<rl;

}