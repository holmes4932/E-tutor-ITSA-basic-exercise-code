#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int a1,a2,b1,b2;
        int c1,c2;
        cin>>s>>a1>>a2>>b1>>b2;
        if(s=="+"){
            c1=a1+b1;
            c2=a2+b2;
        }
        else if(s=="-"){
            c1=a1-b1;
            c2=a2-b2;
        }
        else if(s=="*"){
            c1=a1*b1-a2*b2;
            c2=a1*b2+a2*b1;
        }
        else{
            c1=a1*b1+a2*b2/(b1*b1-b2*b2);
            c2=a2*b1-a1*b2/(b1*b1-b2*b2);
        }
        cout<<c1<<" "<<c2<<"\n";
    }
}
