#include<bits/stdc++.h>
using namespace std;

int main(){
    char input[1000];
    while(fgets(input,1000,stdin)!=NULL){
        int num=0;
        map<int,int>mp;
        char *token=strtok(input," \n\r");
        int mx=0;
        while(token!=NULL){
            int n=atoi(token);
            if(mp[n]){
                mp[n]++;
            }
            else{
                mp[n]=1;
            }
            num++;
            token=strtok(NULL," \n\r");
        }
        int flag=0;
        for(map<int,int>::iterator it=mp.begin();it!=mp.end();it++){
            if((*it).second>floor((float)num/2)){
                cout<<(*it).first<<'\n';
                flag=1;
            }
        }
        if(flag==0){
            cout<<"NO\n";
        }
    }
}
