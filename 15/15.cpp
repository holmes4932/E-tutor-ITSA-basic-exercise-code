#include<bits/stdc++.h>
using namespace std;

int main(){
    char input[200];
    fgets(input,200,stdin);

    int alpha[26];
    int len=strlen(input);
    memset(alpha,0,sizeof(alpha));
    for(int i=0;i<len;i++){
        if(input[i]>='A'&&input[i]<='Z'){
            alpha[input[i]-'A']++;
        }
        else if(input[i]>='a'&&input[i]<='z'){
            alpha[input[i]-'a']++;
        }
    }

    char *token=strtok(input," ,.\n\r");
    int word=0;
    while(token!=NULL){
        word++;
        token=strtok(NULL," ,.\n\r");
    }

    printf("%d\n",word);
    for(int i=0;i<26;i++){
        if(alpha[i]>0){
            printf("%c : %d\n",i+'a',alpha[i]);
        }
    }
}
