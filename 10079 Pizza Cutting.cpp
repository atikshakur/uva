#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int n;
    while(scanf("%lld", &n) != EOF){
        if(n < 0) break;

        cout<<((n*(n+1))/2)+1<<endl;
    }



    return 0;
}
