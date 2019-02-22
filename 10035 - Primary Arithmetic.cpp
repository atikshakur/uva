#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(){

    long long a, b;
    int carry, coun, sum, m, n, i;
    while(scanf("%lld %lld", &a, &b) == 2){
        if(a == 0 && b == 0) break;
        carry = 0;
        coun =0;
        //sum = 0;
        while(a>0 || b>0){
            //if(a == 0 && b == 0) break;
            m = a%10;
            a= a/10;
            n = b%10;
            b=b/10;
            sum = m+n+carry;

            if(sum>9){
                coun++;
                carry = 1;
            }
            else carry = 0;
        }

        if(coun ==1) printf("%d carry operation.\n",coun);
        else if(coun >1) printf("%d carry operations.\n",coun);
        else if(coun == 0) printf("No carry operation.\n");
    }

    return 0;
}


