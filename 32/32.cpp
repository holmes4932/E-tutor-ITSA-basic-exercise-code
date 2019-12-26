#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n;
    getline(cin,s);
    cin>>n;
    n%=26;
    for(int i=0;i<s.size();i++){
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
            s[i]+=n;
            if(!((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))){
                s[i]-=26;
            }
        }
        if(s[i]>='0'&&s[i]<='9'){
            s[i]+=n;
            if(!(s[i]>='0'&&s[i]<='9')){
                s[i]-=10;
            }
        }
    }
    cout<<s<<'\n';
}
