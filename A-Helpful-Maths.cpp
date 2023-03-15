// https://codeforces.com/problemset/problem/339/A

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    string sums;
    int nums[100], count=0;
    cin>>sums;
    for(int i=0; i<sums.size(); i++){
        if(sums[i] == '+'){
            continue;
        }
        else{
            nums[count++] = sums[i] - '0';
        }
    }
    sort(nums, nums+count);
    for(int i=0; i<count; i++){
        cout<<nums[i];
        if(i!=count-1){
            cout<<'+';
        }
    }
    return 0;
}