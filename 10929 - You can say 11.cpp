#include<stdio.h>
using namespace std;

int main(){

    unsigned int a;

    while(scanf("%u", &a) == 1){
        if(a == 0) break;

        if(a%11==0) printf("%u is a multiple of 11.\n", a);
        else if(a%11!=0) printf("%u is not a multiple of 11.\n", a);

    }


    return 0;
}

