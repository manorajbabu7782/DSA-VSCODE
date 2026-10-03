#include<bits/stdc++.h>
using namespace std;
int SecondLargest(vector<int>&nums){
    int largest=INT_MIN;
    int secondlargest=INT_MIN;

    for(int i=0;i<nums.size();i++){
        if(nums[i]>largest){
            secondlargest=largest;
            largest=nums[i];

        }else if(nums[i]>secondlargest && nums[i]!=largest){
            secondlargest=nums[i];
        }
    }
    return secondlargest;
}

int main(){
    int n;
    cin>>n;

    vector<int> nums(n);
    for( int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<SecondLargest(nums)<<" ";
    return 0;

}