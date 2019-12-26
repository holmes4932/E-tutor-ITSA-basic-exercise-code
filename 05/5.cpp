#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    char ans[10];
    int flag=0;
    if(a<0){
        flag=1;
    }

    a=abs(a);
    ans[0]='0';
    if(a/64>0){
        ans[1]='1';
        a-=64;
    }
    else{
        ans[1]='0';
    }

    if(a/32>0){
        ans[2]='1';
        a-=32;
    }
    else{
        ans[2]='0';
    }

    if(a/16>0){
        ans[3]='1';
        a-=16;
    }
    else{
        ans[3]='0';
    }

    if(a/8>0){
        ans[4]='1';
        a-=8;
    }
    else{
        ans[4]='0';
    }

    if(a/4>0){
        ans[5]='1';
        a-=4;
    }
    else{
        ans[5]='0';
    }

    if(a/2>0){
        ans[6]='1';
        a-=2;
    }
    else{
        ans[6]='0';
    }

    if(a/1>0){
        ans[7]='1';
        a-=2;
    }
    else{
        ans[7]='0';
    }
    if(flag==1){
        int flag2=0;
        for(int i=7;i>=0;i--){
            if(flag2==1){
                if(ans[i]=='0')ans[i]='1';
                else if(ans[i]=='1')ans[i]='0';
            }
            else if(ans[i]=='1'){
                flag2=1;
            }
        }
    }

    ans[8]='\0';
    printf("%s\n",ans);
}
