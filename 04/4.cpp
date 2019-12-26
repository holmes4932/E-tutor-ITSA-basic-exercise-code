#include<bits/stdc++.h>
using namespace std;

int main(){
    int a1,a2,b1,b2;
    int c1,c2;
    cin>>a1>>a2>>b1>>b2;
    c2=b2-a2;
    if(c2<0){
        c2+=60;
        c1=b1-a1-1;
    }
    else{
        c1=b1-a1;
    }
    if(c1<0){
        c1+=24;
    }
    int ans=0;
    if(c1<2){
        ans=c1*2*30+floor((float)c2/(float)30)*30;
    }
    else if(c1<4){
        c1-=2;
        ans=120+c1*2*40+floor((float)c2/(float)30)*40;
    }
    else{
        c1-=4;
        ans=280+c1*2*60+floor((float)c2/(float)30)*60;
    }
    cout<<ans<<endl;
}
