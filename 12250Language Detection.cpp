#include<bits/stdc++.h>
using namespace std;

int main(){

    string line;
    for(int i = 1;; i++){
        cin>>line;
        if(line == "#") break;
        else if(line == "HELLO") cout<<"Case "<<i<<": ENGLISH\n";
        else if(line == "HOLA") cout<<"Case "<<i<<": SPANISH\n";
        else if(line == "HALLO") cout<<"Case "<<i<<": GERMAN\n";
        else if(line == "BONJOUR") cout<<"Case "<<i<<": FRENCH\n";
        else if(line == "CIAO") cout<<"Case "<<i<<": ITALIAN\n";
        else if(line == "ZDRAVSTVUJTE") cout<<"Case "<<i<<": RUSSIAN\n";
        else cout<<"Case "<<i<<": UNKNOWN\n";
    }

    return 0;
}

