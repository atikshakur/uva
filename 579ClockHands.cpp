#include<bits/stdc++.h>
using namespace std;

int main(){

    string e;
    while(cin>>e){
        if(e == "0:00") break;

        string h = e.substr(0, 2);
        int hh = atoi(h.c_str());

        string m;
        if(e.length() == 4) m = e.substr(2, 2);
        else m = e.substr(3, 2);
        int mm = atoi(m.c_str());

        float deg = abs(0.5 * ((60 * hh) - (11 * mm)));
        if(deg > 180) deg = 360 - deg;
        printf("%.3f\n", deg);

    }

    return 0;
}
