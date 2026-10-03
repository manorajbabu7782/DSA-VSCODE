#include<bits/stdc++.h>
using namespace std;
vector<int> Reverse(vector<int>&nums){
   int i=0;
   int j=nums.size()-1;

   while(i<j){
    swap(nums[i],nums[j]);
    i++;
    j--;
   }
   return nums;
}
int main(){
    int n;
    cin>>n;

    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> rl=Reverse(nums);
    for(int i=0;i<rl.size();i++){
        cout<<rl[i]<<" ";
    }
    return 0;

}