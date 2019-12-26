#include<bits/stdc++.h>
using namespace std;

int main(){
    char special[20],head1[20],head2[20],head3[20];
    char test[20];
    scanf("%s%s%s%s",special,head1,head2,head3);
    int n;
    long long int ans[7];
    long long int money=0;
    memset(ans,0,sizeof(ans));
    scanf("%d\n",&n);
    while(n--){
        scanf("%s",test);
        if(strcmp(test,special)==0){
            ans[0]++;
        }
        else{
            for(int i=0;i<6;i++){
                if(strcmp(test+i,head1+i)==0){
                    ans[i+1]++;
                    break;
                }
                else if(strcmp(test+i,head2+i)==0){
                    ans[i+1]++;
                    break;
                }
                else if(strcmp(test+i,head3+i)==0){
                    ans[i+1]++;
                    break;
                }
            }
        }
    }
    money=ans[0]*2000000+ans[1]*200000+ans[2]*40000+ans[3]*10000+ans[4]*4000+ans[5]*1000+ans[6]*200;
    for(int i=0;i<7;i++){
        if(i==6){
            printf("%lld\n",ans[i]);
        }
        else{
            printf("%lld ",ans[i]);
        }
    }
    printf("%lld\n",money);
}

