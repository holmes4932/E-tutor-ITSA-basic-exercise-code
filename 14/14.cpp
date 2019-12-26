#include<bits/stdc++.h>
using namespace std;

int main(){
    char input[8192];
    char ans[8192];
    while(scanf("%s",input)!=EOF){
        int len=strlen(input);
        for(int i=0;i<len;i++){
            ans[i]=input[len-i-1];
        }
        if(strcmp(ans,input)==0)printf("YES\n");
        else printf("NO\n");
    }
}

