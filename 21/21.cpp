#include<bits/stdc++.h>
using namespace std;

int main(){
    float num;
    cin>>num;
    float mx=num,mn=num;
    for(int i=0;i<9;i++){
        cin>>num;
        if(num>mx)mx=num;
        if(num<mn)mn=num;
    }
    printf("maximum:%.2f\nminimum:%.2f\n",mx,mn);
}
