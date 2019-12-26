#include<bits/stdc++.h>
using namespace std;

int main(){
    string a="  !@#$%^&*()_++`1234567890-=={}||qwertyuiop[]\\:""asdfghjkl;''<>??zxcvbnm,.//";
    char input[1000];
    fgets(input,1000,stdin);
    int len=strlen(input)-1;
    int len2=a.size();
    if(input[len]=='\n')input[len]='\0';
    for(int i=0;i<len;i++){
        if(input[i]>='A'&&input[i]<='Z'){
            input[i]=input[i]-'A'+'a';
        }
        for(int j=0;j<len2;j++){
            if(input[i]==a[j]){
                input[i]=a[j+1];
                break;
            }
        }
    }
    printf("%s\n",input);
}

