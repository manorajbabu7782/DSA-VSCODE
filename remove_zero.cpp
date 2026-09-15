#include<bits/stdc++.h>
using namespace std;

vector<int> RemoveZero(vector<int>&nums){
    int i=0;
    int j=0;

    while  (j<nums.size())
    {
        if(nums[j]!=0){
            swap(nums[i],nums[j]);
            i++;
        }
        j++;
    }
    return nums;
   

}

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);
    for( int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> rl=RemoveZero(nums);
    for (  int i=0;i<rl.size();i++)
    {
        cout<<rl[i]<<" ";
    }



}


