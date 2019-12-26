#include<bits/stdc++.h>
using namespace std;

int main(){
    long double r;
    long long int n,p;
    long double ans=0;
    cin>>r>>n>>p;
    for(int i=0;i<n;i++){
        ans=(ans+p)*(1+r);
    }
    cout<<(long long int)ans<<endl;
}
