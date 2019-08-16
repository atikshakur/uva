
//Recursive way
#include<bits/stdc++.h>
using namespace std;
int f91(int n){
    if(n >= 101) return n-10;
    else return f91(f91(n+11));
}

int main(){

    int n;
    while(scanf("%d", &n) == 1){
        if(n == 0) break;

        printf("f91(%d) = %d\n", n, f91(n));
    }

    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    while(scanf("%d", &n) == 1){
        if(n == 0) break;

        if(n <= 100) printf("f91(%d) = 91\n");
        else if(n>=101) printf("f91(%d) = %d\n", n, n-10);
    }

    return 0;
}

*/
