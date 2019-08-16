#include<bits/stdc++.h>
using namespace std;

int primes[];

int main(){

    for(int i=0; i<=primes.size(); i++){
        printf("%d ", primes[i]);
    }

    return 0;
}

void addToPrimes(int ub){
    int lb = 2, count = 0;
    while(lb <= ub){
        if(isPrime(lb)){
            primes[count] = lb;
            count++;
        }
        lb++;
    }
}

int isPrime(int num){
    for(int i = 2; i <= num/2; i++){
        if(num % i == 0) return 0;
    }
    return 1;
}
