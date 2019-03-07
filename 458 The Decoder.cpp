#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    while(cin >> str){
        int len = str.length();
        for(int i = 0; i < len; i++)
        printf("%c",str[i]-7);
        cout<<"\n";
    }
    return 0;
}
