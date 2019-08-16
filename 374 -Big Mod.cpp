#include<bits/stdc++.h>
using namespace std;

long long bigMod(long long base, long long power, long long mod){
    if(power == 0) return 1;
    else if(power%2 == 1){
        long long p1 = base % mod;
        long long p2 = (bigMod(base, power-1, mod)) % mod;
        return (p1 * p2) % mod;
    }
    else if(power%2 == 0){
        int x = ( bigMod(base, power/2, mod) ) % mod;
        return (x * x) % mod;
    }
}

int main(){

    long long base, power, mod;
    while(scanf("%lld %lld %lld", &base, &power, &mod) != EOF){
        printf("%lld\n", bigMod(base, power, mod));
    }


    return 0;
}
