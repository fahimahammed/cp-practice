// https://codeforces.com/problemset/problem/69/A

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n, counter=0, sum[3] = {0, 0, 0}, x, y, z;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x>>y>>z;
        sum[0] += x;
        sum[1] += y;
        sum[2] += z;
    }
    if(sum[0] == 0 && sum[1]== 0 && sum[2]==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}