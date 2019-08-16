#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    while(scanf("%d", &n) == 1){
        int ans = n;
        while(n > 1){
            n = n - 3;
            ans++;
            n++;
            if(n == 2) n++;
        }
        cout<<ans<<endl;
    }

    return 0;
}
