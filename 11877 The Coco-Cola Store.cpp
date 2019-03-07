#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    while(scanf("%d", &n) == 1){
        if(n == 0) break;
        int coun = 0;
        while(n >= 3){
            n = n - 3;
            coun++;
            n++;
        }
        if(n == 2) cout<<coun+1<<endl;
        else cout<<coun<<endl;
    }

    return 0;
}
