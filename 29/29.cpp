#include<bits/stdc++.h>
using namespace std;

int main(){
    string num;
    cin>>num;
    int x;
    if(num[0]=='I'){
        x=34;
    }
    else if(num[0]=='O'){
        x=35;
    }
    else if(num[0]=='W'){
        x=32;
    }
    else if(num[0]=='Z'){
        x=33;
    }
    else if(num[0]<='H'){
        x=num[0]-'A'+10;
    }
    else if(num[0]>='J'&&num[0]<='N'){
        x=num[0]-'A'+9;
    }
    else if(num[0]>='P'&&num[0]<='V'){
        x=num[0]-'A'+8;
    }
    else if(num[0]=='X'||num[0]=='Y'){
        x=num[0]-'A'+7;
    }
    int p=x/10+x%10*9+(num[1]-'0')*8+(num[2]-'0')*7+(num[3]-'0')*6+(num[4]-'0')*5+(num[5]-'0')*4+(num[6]-'0')*3+(num[7]-'0')*2+(num[8]-'0')+(num[9]-'0');
    if(p%10==0){
        cout<<"CORRECT!!!\n";
    }
    else{
        cout<<"WRONG!!!\n";
    }
}
