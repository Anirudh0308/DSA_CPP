#include<iostream>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<< "hello ani " << endl;
    }

    int sayHello(char name){
        cout<< "hello ani " << endl;
        return 1;
    }
    int sayHello(string name){
        cout<< "hello" <<name << endl;
        return 1;
    }
};

int main(){
    A obj;
    obj.sayHello();

    return 0;
}