#include<bits/stdc++.h>
using namespace std;

int main() {

    int t, sum = 0;
    cin>>t;

    while(t--){
        string in;
        cin>>in;

        int donate = 0;

        if(in[0] == 'd') {
            scanf("%d", &donate);
            sum = sum + donate;
        }
        else
            cout<<sum<<endl;
    }

    return 0;
}
