#include<bits/stdc++.h>
using namespace std;
bool sorted(vector<int>& nums){
    int n=nums.size();
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]>nums[i+1]){
            return false;
        
        }
    }
        
    return true;   

}
int main(){
    int n;
    cin>>n;

    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    
    if(sorted(nums)){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}