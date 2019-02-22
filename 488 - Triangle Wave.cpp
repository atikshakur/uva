#include<stdio.h>
#include<iostream>

using namespace std;

int main(){

    int t,i,j,k;
    cin>>t;

    for(i=1;i<=t;i++){
        int a, b;
        cin>>a;
        cin>>b;

        for(j=1;j<=a;j++){
            cout<<j<<endl;
            for(k=2;k<=a;k++){
                cout<<k;
            }
        }

    }




    return 0;
}
