
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    for(int j = 1; j<=t;j++){
        int num;
        cin>>num;
        int arr[num];
        for(int i = 0; i<num;i++){
            scanf("%d", &arr[i]);
        }

        sort(arr, arr+num);

        printf("Case %d: %d\n", j, arr[num-1]);
    }



    return 0;
}

