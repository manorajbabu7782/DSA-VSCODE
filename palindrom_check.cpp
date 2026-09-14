#include<bits/stdc++.h>
using namespace std;

vector <char> palli(vector<char>& s){
    int  i=0;
    int  j=s.size()-1;

    while (i<j)
    {
        swap(s[i],s[j]);
        i++;
        j--;

    }
    

}

int main (){
    int n;
    cin>>n;
    vector<char>s(n);
    for( char i=0;i<n;i++){
        cin>>s[i];
    }
    vector<char>v=s;
    palli(s);
    if(v==s){
        cout<<" pallindrome";
    } else{
        cout<<"not pallindrome";
    }
    


}
