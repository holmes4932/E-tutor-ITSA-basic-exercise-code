#include<bits/stdc++.h>
using namespace std;

int main(){
    char input[8192];
    char *token=NULL;
    int num[100];
    int i;
    int sum;
    while(fgets(input,8192,stdin)!=NULL){
        i=0;
        sum=0;
        token=strtok(input," \r\n");
        while(token!=NULL){
            num[i]=atoi(token);
            sum=sum+atoi(token);
            i++;
            token=strtok(NULL," \r\n");
        }
        printf("Size: %d\nAverage: %.3f\n",i,(float)sum/i);
    }
}

