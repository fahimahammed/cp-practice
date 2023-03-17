#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool isLucky(int num)
{
    while(num > 0){
        int digit = num % 10;
        if(digit != 4 && digit != 7){
            return false;
        }
        num /= 10;
    }
    return true;
}
int main()
{
    int num;
    cin>>num;
    for(int i=1; i<=num; i++){
        if(num % i == 0 && isLucky(i)){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}