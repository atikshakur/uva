#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){

    long int arr[2000005];
    int n, i;

    while(scanf("%d", &n) == 1){
        if(n == 0) break;

        for(i=0;i<n;i++)
            scanf("%d", &arr[i]);

        sort(arr, arr+i);

        for(i =0;i<n;i++){
            printf("%d", arr[i]);
            if(i < n-1)
                printf(" ");
        }
        printf("\n");
    }


    return 0;
}

