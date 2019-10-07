#include<bits/stdc++.h>
using namespace std;

int main(){

    string line;
    while(getline(cin, line)){
        int initialize = 0;

        while(initialize < line.length()){
            int space = line.find(' ', initialize); //find(whatToFind, whereToStart)
            string word = line.substr(initialize, space - initialize); // substr(startIndex, len);
            for(int i = (word.length() - 1); i >= 0; i--){
                printf("%c", word[i]);
            }
            while(space < line.length() && line[space] == ' '){
                printf(" ");
                space++;
            }
            initialize = space;
        }
        cout<<endl;
    }

    return 0;
}
