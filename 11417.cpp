#include<bits/stdc++.h>
using namespace std;

int GCD(int i, int j){
    return __gcd(i,j);
}

int main(){

    int n;
    while(scanf("%d", &n) == 1){
        if(n == 0) break;

        long long G=0;
        for(int i=1;i<n;i++)
            for(int j=i+1;j<=n;j++){
                G+=GCD(i,j);
            }
        cout<<G<<endl;
    }

    return 0;
}

