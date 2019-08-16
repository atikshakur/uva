#include<bits/stdc++.h>
using namespace std;

int main(){

    int sh, sm, eh, em;

    while(scanf("%d %d %d %d", &sh, &sm, &eh, &em) == 4){
        if(sh == 0 && sm == 0 && eh == 0 && em == 0) break;

        int st, et, smin;

        st = (sh * 3600) + (sm * 60);
        et = (eh * 3600) + (em * 60);

        if(st < et) smin = (et - st) / 60;
        else smin = (86400 - st + et) / 60;

        printf("%d\n", smin);

    }

    return 0;
}
