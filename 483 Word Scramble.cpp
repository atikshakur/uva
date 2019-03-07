#include<bits/stdc++.h>
using namespace std;

int main(){


    string s = "ab cd";
    for(int i = 0; i<s.length(); i++){
        if(s[i] == ' ')
            reverse(s.begin(), s.end());
    }
    cout<<s;





    return 0;
}
