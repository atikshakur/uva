
#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, limit;

    for(int i = 1;; i++){
        scanf("%lld %lld", &a, &limit);
        if(a<0 && limit<0) break;
        int terms = 1;
        int b = a, c = limit;

        while(a >= 0){
            if(a == 1){
                break;
            }
            else if(a % 2 == 0 && a > 1){
                a = a / 2;
                terms++;
            }
            else if(a % 2 != 0 && a > 1) {
                a = (3 * a) + 1;
                if(a > limit) break;
                else terms++;
            }

        }
        printf("Case %d: A = %d, limit = %d, number of terms = %d\n", i, b, c, terms);

    }




    return 0;
}
