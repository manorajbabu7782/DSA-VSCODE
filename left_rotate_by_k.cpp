#include<bits/stdc++.h>
using namespace std;
vector<int> LeftRotate(vector<int>& nums , int k){
    int n=nums.size();
    k=k%n;
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
    reverse(nums.begin(),nums.end());
    return nums;


}
int main(){
    int k;cin>>k;int n;cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> rl=LeftRotate(nums,k);
    for(int i=0;i<rl.size();i++){
        cout<<rl[i];
    }

}