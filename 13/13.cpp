#include<bits/stdc++.h>
using namespace std;

struct node{
    int name;
    int num;
};

void solve(){
    char line[8192];
    struct node card[1000];
    fgets(line,8192,stdin);
    char *token=strtok(line," \n\r");
    int index=0;
    while(token!=NULL){
        if(*token=='S')card[index].name=4;
        else if(*token=='H')card[index].name=3;
        else if(*token=='D')card[index].name=2;
        else if(*token=='C')card[index].name=1;
        token++;
        card[index].num=atoi(token);
        index++;
        token=strtok(NULL," \n\r");
    }
    for(int i=1;i<index;i++){
        for(int j=0;j<index-i;j++){
            if(card[j].name<card[j+1].name||(card[j].name==card[j+1].name)&&card[j].num<card[j+1].num){
                struct node tmp=card[j];
                card[j]=card[j+1];
                card[j+1]=tmp;
            }
        }
    }
    for(int i=0;i<index;i++){
        if(i==index-1){
            if(card[i].name==4)cout<<"S"<<card[i].num<<"\n";
            else if(card[i].name==3)cout<<"H"<<card[i].num<<"\n";
            else if(card[i].name==2)cout<<"D"<<card[i].num<<"\n";
            else if(card[i].name==1)cout<<"C"<<card[i].num<<"\n";
        }
        else{
            if(card[i].name==4)cout<<"S"<<card[i].num<<" ";
            else if(card[i].name==3)cout<<"H"<<card[i].num<<" ";
            else if(card[i].name==2)cout<<"D"<<card[i].num<<" ";
            else if(card[i].name==1)cout<<"C"<<card[i].num<<" ";
        }
    }
}

int main(){
    char input[100];
    fgets(input,100,stdin);
    int t=atoi(input);
    while(t--){
        solve();
    }
}
