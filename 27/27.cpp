#include<bits/stdc++.h>
using namespace std;

int main(){
    string ans,n;
    cin>>ans;
    cin>>n;
    while(1){
        if(n=="0000")break;
        int a=0,b=0;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(ans[i]==n[j]&&i!=j)b++;
                if(ans[i]==n[j]&&i==j)a++;
            }
        }
        cout<<a<<"A"<<b<<"B\n";
        cin>>n;
    }
}
