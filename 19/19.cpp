#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int>bus[30];
    int time[31];
    memset(time,0,sizeof(time));
    int n;
    int ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>bus[i].first>>bus[i].second;
    }
    sort(bus,bus+n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(time[j]<=bus[i].first){
                time[j]=bus[i].second;
                break;
            }
        }
    }
    for(int i=0;i<n+1;i++){
        if(time[i]==0){
            cout<<i<<'\n';
            break;
        }
    }
}
