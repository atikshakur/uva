#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        if (a+b > c && a+c > b && b+c > a) cout << "OK" << endl;
        else cout << "Wrong!!" << endl;
    }
    return 0;
}
