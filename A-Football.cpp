// https://codeforces.com/problemset/problem/96/A

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    string players;
    int zeroCount=1, oneCount=1, flag=0;
    cin>>players;
    for(int i=0; i<players.size(); i++){
        if(players[i] == players[i+1]){
            if(players[i] == '0') {
                zeroCount++;
                oneCount = 1;
            }
            else {
                oneCount++;
                zeroCount = 1;
            }
        }
        else{
            oneCount = 1;
            zeroCount = 1;
        }
        if(zeroCount >= 7 || oneCount >= 7){
            flag = 1; 
            break;
        }
        else flag = 0;
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}