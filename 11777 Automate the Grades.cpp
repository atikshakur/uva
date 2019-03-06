#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    for(int j=1;j<=t;j++){
        int term1, term2, mFinal, att, test1, test2, test3, total, av;
        cin>>term1;
        cin>>term2;
        cin>>mFinal;
        cin>>att;
        cin>>test1;
        cin>>test2;
        cin>>test3;

        int arr[]= {test1, test2, test3};

        sort(arr, arr+3);
        av = (arr[1]+arr[2])/2;
        total=term1+term2+mFinal+att+av;
        char grade='F';
        if(total>=90 && total<=100) grade='A';
        else if(total>=80 && total<90) grade='B';
        else if(total>=70 && total<80) grade='C';
        else if(total>=60 && total<70) grade='D';
        else grade = 'F';

        cout<<"Case "<<j<<": "<<grade<<endl;
    }

    return 0;
}








