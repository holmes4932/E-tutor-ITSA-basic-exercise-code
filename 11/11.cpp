#include<bits/stdc++.h>
using namespace std;

int main(){
    int row,col;
    while(scanf("%d%d",&row,&col)!=EOF){
        int arr[row][col];
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                if(j!=row-1)cout<<arr[j][i]<<" ";
                else cout<<arr[j][i]<<endl;
            }
        }
    }
}
