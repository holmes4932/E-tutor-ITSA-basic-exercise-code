#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF){
        if(a*a+b*b>200*200){
            cout<<"outside\n";
        }
        else{
            cout<<"inside\n";
        }
    }
}
