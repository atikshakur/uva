#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int a, b, s1, s2;
        cin>>a;
        cin>>b;

        s1 = (a + b)/2;
        s2 = a - s1;

        if(a<b) cout<<"impossible"<<endl;
        else if(a%2 != 0 && b == 0) cout<<"impossible"<<endl;
        else if(abs(s1 - s2) != b) cout<<"impossible"<<endl;
        else printf("%d %d\n", s1, s2);

    }

    return 0;
}

