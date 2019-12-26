#include<bits/stdc++.h>
using namespace std;

int main(){
    int high,gender;
    while(scanf("%d%d",&high,&gender)!=EOF){
        if(gender==1){
            printf("%.1f\n",((float)high-80)*0.7);
        }
        else if(gender==2){
            printf("%.1f\n",((float)high-70)*0.6);
        }
    }
}
