#include<bits/stdc++.h>
using namespace std;

int num(char d){
    char c = tolower(d);
    if(c == 'a' || c == 'd' || c == 'g' || c == 'j' || c == 'm' || c == 'p' || c == 't' || c == 'w' || c == ' ') return 1;
    else if(c == 'b' || c == 'e' || c == 'h' || c == 'k' || c == 'n' || c == 'q' || c == 'u' || c == 'x') return 2;
    else if(c == 'c' || c == 'f' || c == 'i' || c == 'l' || c == 'o' || c == 'r' || c == 'v' || c == 'y') return 3;
    else if(c == 's' || c == 'z') return 4;
    else return 0;
}

int main(){

    int t;
    cin>>t;
    getchar();
    for(int i=1; i<=t; i++){
       string s;
       getline(cin, s);
       int coun = 0;
       for(int j=0; j<s.length(); j++){
            coun = coun + num(s[j]);
       }
       printf("Case #%d: %d\n", i, coun);
    }

    return 0;
}
