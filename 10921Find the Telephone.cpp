#include<bits/stdc++.h>
using namespace std;

int next(char c){
    if(c == 'A' || c == 'B' || c == 'C') return 2;
    else if(c == 'D' || c == 'E' || c == 'F') return 3;
    else if(c == 'G' || c == 'H' || c == 'I') return 4;
    else if(c == 'J' || c == 'K' || c == 'L') return 5;
    else if(c == 'M' || c == 'N' || c == 'O') return 6;
    else if(c == 'P' || c == 'Q' || c == 'R' || c == 'S') return 7;
    else if(c == 'T' || c == 'U' || c == 'V') return 8;
    else if(c == 'W' || c == 'X' || c == 'Y' || c == 'Z') return 9;
    else if(c == '1') return 1;
    else if(c == '0') return 0;
    else if(c == '-') return 45;
}


int main(){

    string line;
    while(cin>>line){
    string phone;
    for(int i = 0; i <line.size(); i++){
        int c = next(line[i]);

        if(c == 45) phone = phone + '-';
        else if(c == 1) phone = phone + '1';
        else if(c == 0) phone = phone + '0';
        else phone = phone + to_string(c);

    }
    cout<<phone<<endl;
    }

    return 0;
}
