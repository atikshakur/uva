
#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;

    for(int i = 1;; i++){
        cin>>s;
        if(s == "*") break;
        else if(s == "Hajj") printf("Case %d: Hajj-e-Akbar\n", i);
        else if(s == "Umrah") printf("Case %d: Hajj-e-Asghar\n", i);
    }

    return 0;
}

