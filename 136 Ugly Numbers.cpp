#include<bits/stdc++.h>
using namespace std;

int main(){

    int mCount = 0;

    for(int i = 2;; i++){

        if(i%2 == 0 || i%3 == 0 || i%5 == 0){
            mCount++;
            if(mCount == 1500) {
            cout<<"The 1500'th ugly number is "<<i<<".";
            break;
            }
        }


    }

    return 0;
}
