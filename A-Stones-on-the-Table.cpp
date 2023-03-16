// https://codeforces.com/problemset/problem/266/A

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n, counter=0;
    cin>>n;
    string stones;
    cin>>stones;
    for(int i=0; i<n; i++){
        if(stones[i] == stones[i+1]) counter++;
    }
    cout<<counter<<endl;
    return 0;
}