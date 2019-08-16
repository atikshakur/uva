#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--){
        int f, sum = 0;
        cin>>f;

        while(f--){
            int a, b, c;
            cin>>a; cin>>b; cin>>c;
            sum = sum + (a * c);

        }

        cout<<sum<<endl;
    }

    return 0;
}
