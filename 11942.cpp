#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {

    int t, sum = 0;
    cin>>t;
    cout<<"Lumberjacks:"<<endl;

    while(t--){
        int arr[10], flag, k = 0;
        for(int i = 0; i < 10; i++){
            scanf("%d", &arr[i]);
        }

        for(int i = 0; i < 9; i++){
            if(arr[i] > arr[i+1]){
                flag = 1;
                k++;
            }
        }

        if(is_sorted(begin(arr), end(arr))) flag = 1;
        else if(k == 9) flag = 1;
        else flag = 0;


        if(flag == 0) cout<<"Unordered"<<endl;
        else cout<<"Ordered"<<endl;

    }

    return 0;
}

