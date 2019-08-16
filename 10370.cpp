#include<bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int N, aboveAvg = 0;
        int sum=0;
        double percentage;
        cin>>N;
        int nums[N];
        for(int i = 0; i < N; i++){
            scanf("%d", &nums[i]);
            sum = sum + nums[i];
            //cout<<sum<<endl;
        }
        double avg = (sum / N);
        //cout<<"avg: "<<avg<<endl;

        for(int i = 0; i < N; i++){
            if(nums[i] > avg)
                aboveAvg++;
                //cout<<"1::"<<aboveAvg<<endl;
        }


        percentage = ((float)aboveAvg * 100) / (float)N;

        cout<<setprecision(3)<<fixed<<percentage<<"%"<<endl;
    }

    return 0;
}
