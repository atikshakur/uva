#include<bits/stdc++.h>
using namespace std;
int main(){

    int t = 201;
    while(t--){
        float a, b;
        cin>>a;
        cin>>b;
        if(a == 0 && b == 0) break;
        int coun=0;
        for(float i=a;i<=b;i++){

            if(sqrt(i) == floor(sqrt(i))) coun++;

        }
        cout<<coun<<endl;
    }

    return 0;
}
