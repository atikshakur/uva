#include<iostream>
#include<string>

using namespace std;

int main(){

    int t;
    cin>>t;
    string one = "one";

    while(t--){

        string word;

        cin>>word;

        if(word.length() == 5) cout<<"3"<<endl;
        else{
            int count = 0;
            for(int i = 0;i <3;i++){
                if(one[i] == word[i]) count++;
            }
        if(count >= 2) cout<<"1"<<endl;
        else cout<<"2"<<endl;
        }
    }

    return 0;
}
