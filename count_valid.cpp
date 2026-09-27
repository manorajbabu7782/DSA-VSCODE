#include<bits/stdc++.h>
using namespace std;
vector<int> valid(vector<int>& nums, int target){
     int i=0;
     int j=nums.size()-1;
     int  sum=i+j;
     int count=1;
     for (i<0; i<nums.size();i++){
        if (sum==target){
            i++;
            j++;
            count++;
        }
        
     }

}

int main(){
    int target;
    cin>>target;

    int n;
    cin>>n;


    vector <int> nums(n);
    for ( int i=0;i<n;i++){
        cin>>nums[i];

    }
    vector<int> rl=valid(nums ,target);
    for( int i=0;i<rl.size();i++){
        cout<<rl[i] <<" ";

    }



}
