//n*(n+1)(2n+1)/6

#include<bits/stdc++.h>

int main(){

    int n;

    while(scanf("%d", &n) == 1){
        if(n == 0) break;

        int b = (n * (n +1) * ((2 * n) + 1)) / 6;
        printf("%d\n", b);

    }

    return 0;
}
