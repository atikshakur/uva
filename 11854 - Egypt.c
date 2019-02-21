#include<stdio.h>
#include <stdbool.h>

int main(){

    int a, b, c;


    while(scanf("%d %d %d",&a,&b,&c) == 3){
        if(a != 0 || b != 0 || c != 0){

        int d = a * a;
        int e = b * b;
        int f = c * c;

        if ((d == e + f) || (e == d + f) || (f == d + e))
            printf("right\n");
        else
            printf("wrong\n");

    }



}
return 0;
}



