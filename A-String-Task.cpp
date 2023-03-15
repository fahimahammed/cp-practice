// https://codeforces.com/problemset/problem/118/A

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    string str;
    char ch;
    cin>>str;
    for(long long int i=0; i<str.size(); i++){
        ch = tolower(str[i]);
        if(ch != 'a' && ch != 'o' && ch != 'y' && ch != 'e' && ch != 'u' && ch != 'i'){
            cout<<"."<<ch;
        }
    }
    return 0;
}