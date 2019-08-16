#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    for(int i = 1; i <= t; i++){

        int totalMatch, bangladesh = 0, www = 0, abandoned = 0, draw = 0;
        cin>>totalMatch;
        string results;
        cin>>results;

        for(int j = 0; j < totalMatch; j++){
            if(results[j] == 'B') bangladesh++;
            else if(results[j] == 'W') www++;
            else if(results[j] == 'T') draw++;
            else if(results[j] == 'A') abandoned++;
        }

        if(draw == 0 && www == 0 && bangladesh > 0) cout<<"Case "<<i<<": "<<"BANGLAWASH"<<endl;
        else if(bangladesh == 0 && draw == 0 && www > 0) cout<<"Case "<<i<<": "<<"WHITEWASH"<<endl;
        else if((bangladesh == 0 && www == 0) && (abandoned > 0 && draw == 0)) cout<<"Case "<<i<<": "<<"ABANDONED"<<endl;
        else if(bangladesh > www) cout<<"Case "<<i<<": "<<"BANGLADESH "<<bangladesh<<" - "<<www<<endl;
        else if(bangladesh < www) cout<<"Case "<<i<<": "<<"WWW "<<www<<" - "<<bangladesh<<endl;
        else cout<<"Case "<<i<<": "<<"DRAW "<<www<<" "<<draw<<endl;

    }

    return 0;
}
