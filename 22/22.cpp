#include<bits/stdc++.h>
using namespace std;

int main(){
    string s[10];
    for(int i=1;i<=9;i++){
        cin>>s[i];
    }
    if(s[1]==s[2]&&s[2]==s[3]){
        cout<<"True\n";
        return 0;
    }
    if(s[4]==s[5]&&s[6]==s[6]){
        cout<<"True\n";
        return 0;
    }
    if(s[7]==s[8]&&s[8]==s[9]){
        cout<<"True\n";
        return 0;
    }
    if(s[1]==s[4]&&s[4]==s[7]){
        cout<<"True\n";
        return 0;
    }
    if(s[2]==s[5]&&s[5]==s[8]){
        cout<<"True\n";
        return 0;
    }
    if(s[3]==s[6]&&s[6]==s[9]){
        cout<<"True\n";
        return 0;
    }
    if(s[1]==s[5]&&s[5]==s[9]){
        cout<<"True\n";
        return 0;
    }
    if(s[3]==s[5]&&s[5]==s[7]){
        cout<<"True\n";
        return 0;
    }
    cout<<"False\n";
}
