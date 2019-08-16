#include<iostream>
using namespace std;

class Addition {
    private:
        int num;
    public:
    Addition(){}

    Addition(int num){
        this->num = num;
    }

    Addition operator + (Addition const &c){
        Addition add;
        add.num = this->num + c.num;
        return add;
    }

    void show(){
        cout<<num<<endl;
    }

};


int main(){

    Addition A1, A2(2), A3(10);
    A1 = A2 + 1;
    //A2 = 20 + A3;

    A1.show();
    A2.show();
    A3.show();

    return 0;
}
