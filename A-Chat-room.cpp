// https://codeforces.com/problemset/problem/58/A

#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<string>

using namespace std;
int main()
{
    string word;
    char p[] = {'h', 'e', 'l', 'l', 'o'};
    int index = 0, counter=0;
    cin>>word;
    for(int i=0; i<word.size(); i++){
        if(word[i] == p[index]){
            index++;
            counter++;
        }
    }
    string result = (counter == 5) ? "YES" : "NO";
    cout<< result  <<endl;
    return 0;
}