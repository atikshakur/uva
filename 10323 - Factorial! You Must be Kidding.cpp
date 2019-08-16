#include<bits/stdc++.h>
using namespace std;

long long fact(int n) {
    if(n==0 || n ==1) return 1;
    else return n * fact(n-1);
}

int main() {

    cout<<fact(100);
    int n;
    while(scanf("%d", &n) == 1){
        int factorial = fact(n);
        if(factorial < 10000) printf("Underflow!\n");
        else if(factorial > 6227020800) printf("Overflow!\n");
        else printf("%d\n", factorial);
    }



    return 0;
}
