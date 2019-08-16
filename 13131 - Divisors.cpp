#include<stdio.h>

int main(){

    int t;
    scanf("%d", &t);
    while(t--){
        int n, k, sum=0;
        scanf("%d", &n);
        scanf("%d", &k);
        for(int i=1; i<=n; i++){
            if(n%i == 0){
                if(i%k != 0) sum = sum + i;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}
