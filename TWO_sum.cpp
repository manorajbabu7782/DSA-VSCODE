#include <bits/stdc++.h>
using namespace std;
  vector<int> twoSum(vector<int> & nums, int target){
    int i =0;
    int j=nums.size()-1;

    while (i<j){
        int sum=nums[i]+nums[j];

        if(sum==target){
            return{i,j};
        }else if (sum>target){
            j--;
        }else{
            i++;
        }

    }
    return{};

}
int main(){
    int target;
    cin>>target;
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> llove=twoSum(nums, target);
    for(int i=0;i<llove.size();i++){
        cout<<llove[i]<<" ";

    }
}