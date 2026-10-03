#include<bits/stdc++.h>
using namespace std;
vector<int>OccursOnce(vector<int> & nums){
    int n=nums.size();
    int i=0;

    for(int i=0;i<nums.size();i++){
        if(nums[i]!=nums[i+1]){
            cout<< nums[i];
            i++;
        }else{
            continue;
        }
    }
    return nums;

}
int main (){
    int n; cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> rl=OccursOnce( nums);
    for(int i=0;i<rl.size();i++){
        cout<<nums[i];
    }

    
}