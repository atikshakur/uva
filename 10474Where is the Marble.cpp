
#include<bits/stdc++.h>
using namespace std;
int main(){

    int k, n, q, query, i, m, j;

    for(k = 1;; k++){
        scanf("%d %d", &n, &q);
        if(n == 0 && q == 0) break;

        int arr[n];
        for(i=0; i<n; i++) scanf("%d", &arr[i]);

        int que[q];
        for(m=0; m<q; m++) scanf("%d", &que[m]);

        sort(arr, arr+n);
        printf("CASE# %d:\n", k);
        for(j=0; j<q; j++){
            bool found = binary_search(arr, arr+n, que[j]);
            int index = lower_bound(arr, arr+n, que[j])-arr;
            if(found) printf("%d found at %d\n", que[j], index+1);
            else printf("%d not found\n", que[j]);
        }

    }



    return 0;
}
