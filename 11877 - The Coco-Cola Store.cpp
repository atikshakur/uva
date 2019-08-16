
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    while(scanf("%d", &n) == 1){
        if(n == 0) break;
        int ans = 0;
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
