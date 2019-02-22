#include<stdio.h>
#include<algorithm>
using namespace std;

int main() {

    int t, i=1, j, k, m, n;

    int arr[3];
    scanf("%d", &t);
    while(t--){
        scanf("%d", &arr[0]);
        scanf("%d", &arr[1]);
        scanf("%d", &arr[2]);
        std::sort(arr, arr+3);

        printf("Case %d: %d\n", i, arr[1]);
        i++;
    }

    return 0;
}


