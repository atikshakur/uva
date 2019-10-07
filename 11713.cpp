#include<bits/stdc++.h>
using namespace std;

bool isVowel (char x)
{
    if ( x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U' )
        return true;

    return false;
}

bool notSame(char a[], char b[]){

    if(strlen(a) != strlen(b)) return false;
    for(int i = 0; i < strlen(a); i++){
        if(!isVowel(a[i]) && a[i] != b[i])
            return false;
    }
    return true;
}


int main(){

    int t;
    cin>>t;

    while(t--){
        char a[25], b[25];
        scanf("%s %s", &a, &b);

        if(notSame(a, b)) cout<<"Yes\n";
        else cout<<"No\n";
    }


    return 0;
}

