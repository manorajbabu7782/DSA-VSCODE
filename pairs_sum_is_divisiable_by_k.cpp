#include<bits/stdc++.h>
using namespace std;
int pairs(vector<int>&nums ,int k){
    unordered_map<int,int>freq;
    int count=0;

    for(int i=0;i<nums.size();i++){
        int rem=nums[i]%k;

        int required_int=(k-rem)%k;

        count+=freq[required_int];

        freq[rem]++;

        }

        return count;


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
    cout<<pairs(nums,k);
    return 0;

}