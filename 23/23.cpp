#include<bits/stdc++.h>
using namespace std;

int main(){
    char input[100];
    fgets(input,100,stdin);

    int n=atoi(strtok(input," \n\r,"));
    int a1=atoi(strtok(NULL," \n\r,"));
    int a2=atoi(strtok(NULL," \n\r,"));
    int a3=atoi(strtok(NULL," \n\r,"));

    int m=n-(a1*15)-(a2*20)-(a3*30);
    if(m<0){
        cout<<"0\n";
        return 0;
    }
    int b1=0,b2=0,b3=0;
    while(m-50>=0){
        m-=50;
        b3++;
    }
    while(m-5>=0){
        m-=5;
        b2++;
    }
    while(m-1>=0){
        m-=1;
        b1++;
    }
    cout<<b1<<","<<b2<<","<<b3<<"\n";
}
