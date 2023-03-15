// https://codeforces.com/problemset/problem/236/A

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    string userName;
    cin>>userName;
    int count=0;
    sort(userName.begin(), userName.end());
    for(int i=0; i<userName.size(); i++){
        if(userName[i] != userName[i-1]){
            count++;
        }
    }
    // cout<<count<<endl;
    // cout<<(count&1)<<endl;
    if(count&1){
        
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }
    return 0;
}