#include<bits/stdc++.h>
using namespace std;

int main(){
    char input[100];
    fgets(input,100,stdin);
    int n=atoi(input);
    while(fgets(input,100,stdin)!=NULL){
        int len=strlen(input);
        if(len==1&&input[0]=='\n')continue;
        int ans=0;
        for(int i=0;i<len&&input[i]!='\n';i++){
            if(input[i]>=32)ans+=input[i];
        }
        printf("%d\n",ans);
    }
}

