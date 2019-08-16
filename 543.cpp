#include<bits/stdc++.h>
using namespace std;

int isPrime(int num){
    for(int i = 2; i <= num/2; i++){
        if(num % i == 0) return 0;
    }
    return 1;
}


void sieve(int n) {
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }

     for(int i = 2; i<n/2+1; i++){

        if(prime[i] && prime[n-i])
            printf("%d = %d + %d\n", n, i, n-i);
    }
}

void twoPrimes(int n){
    for(int i = 2; i<n/2+1; i++){

        if(isPrime(i) && isPrime(n - i))
            printf("%d = %d + %d\n", n, i, n-i);
    }
}


int main(){

    int n;
    while(scanf("%d", &n) == 1){
        if(n == 0) break;
        sieve(n);
    }


    return 0;
}
