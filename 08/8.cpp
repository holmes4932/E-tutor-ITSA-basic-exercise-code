#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int flag=0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag==1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
}
