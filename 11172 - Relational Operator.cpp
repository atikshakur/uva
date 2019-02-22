#include<stdio.h>
using namespace std;

int main(){

    int t, i;
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d", &a);
        scanf("%d", &b);
            if(a<b) printf("<\n");
            else if(a>b) printf(">\n");
            else printf("=\n");
    }


    return 0;
}
