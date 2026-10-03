#include<bits/stdc++.h>
using namespace std;
vector<int> sort(vector<int>&nums){
    int i=0;
    int j=0;
    int k=nums.size()-1;

    while(j<=k){
        if(nums[j]==0){
            swap(nums[i],nums[j]);
            i++;
            j++;
        }else if(nums[j]==1){
            j++;
        }else{
            swap(nums[j],nums[k]);
            k--;
        }
        
    }
    return nums;

}
int main(){
    int n; cin>>n;
    vector<int> nums(n);
    int i=0;
    int j=0;
    int k=nums.size()-1;

    for(i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> rl=sort(nums);
    for (i=0;i<rl.size();i++){
        cout<<rl[i];


    }
    return 0;

    

    

}