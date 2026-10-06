#include<bits/stdc++.h>
using namespace std;
double MaximumAvg(vector<int>&nums ,int k){
    int l=0;
    int h=k-1;
    double sum=0;

    for(int i=l;i<k;i++){
        sum+=nums[i];
    }
    double res=sum;
    while(h<nums.size()-1){
        l++;
        h++;

        sum-=nums[l-1];
        sum+=nums[h];

        res=max(res,sum);
    }

    return res/k;


}
int main(){
    int k; cin>>k;
    int n; cin>>n;

    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    double result=MaximumAvg(nums , k);
    cout<<result;
}