#include<bits/stdc++.h>

using namespace std;
int main(){
    int i;
    char a[1000];
    while(cin>>a){
        int c=0;
        int w=1;
        for(i=0;a[i];i++){
            if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z')){
                if(w)
                c++;
                w=0;
            }
            else w=1;
        }
        printf("%d",c);
    }
    return 0;
}
