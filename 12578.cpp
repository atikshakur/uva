#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    scanf("%d", &t);
    while(t--){
        int l;
        double w, r, rArea, gArea;
        scanf("%d", &l);
        w = (double)(6 * l) / 10;
        r = (double)l / 5;
        rArea = (double)(acos(-1) * r * r);
        gArea = (double)(l * w) - rArea;

        printf("%.2lf %.2lf\n", rArea, gArea);
    }

    return 0;
}
