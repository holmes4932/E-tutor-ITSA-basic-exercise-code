#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string num1,num2,ans;
        cin>>num1>>num2;
        while(num1.size()<num2.size()){
            num1="0"+num1;
        }
        while(num1.size()>num2.size()){
            num2="0"+num2;
        }
        int len=num1.size();
        int flag=0;
        for(int i=0;i<num1.size();i++){
            char a=num1[len-i-1]-'0'+num2[len-i-1]+flag;
            flag=0;
            if(a>'9'){
                a-=10;
                flag=1;
            }
            ans=a+ans;
        }
        if(flag==1){
            ans="1"+ans;
        }
        cout<<ans<<'\n';
    }
}
