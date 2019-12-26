#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int ans=0;
        for(int i=0;i<=n;i+=3){
            ans+=i;
        }
        cout<<ans<<endl;
    }
}
