#include<bits/stdc++.h>
using namespace std;

int main(){
    char word[1000];
    char input[1000];
    scanf("%s%s",word,input);
    int times=0;
    char *token=strstr(input,word);
    while(token!=NULL){
        times++;
        token++;
        token=strstr(token,word);
    }
    printf("%d\n",times);
}
