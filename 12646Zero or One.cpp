#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b, c;
    //1 1 1
    //1 0 0
    //1 1 0
    //0 0 0

    while(scanf("%d %d %d", &a, &b, &c) == 3){
        char winner;
        int sum = a + b + c;
        if(sum == 2){
            if(a == 0) winner = 'A';
            else if(b == 0) winner = 'B';
            else if(c == 0) winner = 'C';
        }
        else if(sum == 1){
            if(a == 1) winner = 'A';
            else if(b == 1) winner = 'B';
            else if(c == 1) winner = 'C';
        }
        else winner = '*';

        cout<<winner<<endl;
    }





    return 0;
}
