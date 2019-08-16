#include<bits/stdc++.h>
using namespace std;

int main(){

    string line;
    while(getline(cin, line)){
        if(line == "*") break;
        char c = tolower(line[0]);

        bool isTauto = true;

        for (int i = 0; i < line.size(); i++){
            if(line[i] == ' '){
                if(i + 1 < line.size() && tolower(line[i + 1]) != c){
                    isTauto = false;
                    break;
                }
            }
        }

        cout<<(isTauto ? 'Y' : 'N')<<endl;
    }
    return 0;
}

