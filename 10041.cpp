#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int r, sum = 0;
        double avg, rSum = 0.0;
        cin>>r;
        int arr[r];

        for(int i = 0; i < r; i++){
            scanf("%d", &arr[i]);
            sum = sum + arr[i];
        }

        avg = (double)sum / (double)r;
        //cout<<avg<<endl;

        for(int j = 0; j < r; j++){
            rSum = rSum + abs(avg - arr[j]);
        }
        cout<<(int)rSum<<endl;
    }

    return 0;
}


