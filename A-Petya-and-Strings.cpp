//  https://codeforces.com/problemset/problem/112/A

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin>>a>>b;
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    transform(b.begin(), b.end(), b.begin(), ::toupper);
    cout<< a.compare(b) <<endl;
    return 0;
}