#include<bits/stdc++.h>
using namespace std;

int recursive(int n){
    if(n==0||n==1)return n+1;
    else return recursive(n-1)+recursive(n/2);
}

int main(){
    int n;
    cin>>n;
    cout<<recursive(n)<<endl;
}

