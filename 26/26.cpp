#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    stringstream ss;
    pair<int,int>num[n];
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int sum=0;
        int len=s.size();
        for(int j=0;j<len;j++){
            sum+=s[j]-'0';
        }
        ss.clear();
        ss<<s;
        ss>>num[i].second;
        num[i].first=sum;
    }
    sort(num,num+n);
    for(int i=0;i<n;i++){
        if(i==n-1){
            cout<<num[i].second<<"\n";
        }
        else{
            cout<<num[i].second<<" ";
        }
    }
}

