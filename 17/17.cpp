#include<bits/stdc++.h>
using namespace std;

int main(){
    char word[1000];
    vector<string>v;
    set<string>st;
    while(scanf("%s",word)!=EOF){
        int len=strlen(word);
        for(int i=0;i<len;i++){
            if(word[i]>='A'&&word[i]<='Z'){
                word[i]=word[i]-'A'+'a';
            }
        }
        string s=word;
        if(st.count(s)==0){
            v.push_back(s);
            st.insert(s);
        }
    }
    for(vector<string>::iterator it=v.begin();it!=v.end();it++){
        if(it==v.end()-1)cout<<(*it)<<"\n";
        else cout<<(*it)<<" ";
    }
}
