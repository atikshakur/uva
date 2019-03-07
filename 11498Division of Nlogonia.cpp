#include<bits/stdc++.h>
using namespace std;

int main(){

    int k, m, n, a, b;
    while(scanf("%d", &k) == 1){
        if(k == 0) break;
        scanf("%d %d", &n, &m);

        while(k--){
            cin>>a;
            cin>>b;
            if(a == n || b == m) cout<<"divisa"<<endl;
            else if(a>n && b>m) cout<<"NE"<<endl;
            else if(a<n && b>m) cout<<"NO"<<endl;
            else if(a<n && b<m) cout<<"SO"<<endl;
            else if(a>n && b<m) cout<<"SE"<<endl;

        }
    }




    return 0;
}

