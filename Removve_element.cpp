#include <bits/stdc++.h>
using namespace std;
int Remove(vector<int>& nums , int target){

int k=0;
for(int i=0;i<nums.size();i++){
    if(nums[i]!=nums[k]){
        nums[k]=nums[i];
        k++;
    }

}
return k;
}

int main(){
    int target;
    cin>>target;
    int n;cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int manorand=Remove(nums, target);
    for(int i=0;i<manorand;i++){
        cout<<nums[i]<<" ";


    }
    cout<<endl;
    cout<<manorand;
}

