#include<iostream>
using namespace std;

class A{
    public:
    void func(){
        cout<<"I am A" << endl;
    }  
};
class B{
    public:
    void func(){
        cout<<"I am B" << endl;
    }  
};
class C : public A, public B{
   
};

int main(){
    C object1;
    // object1.func();  /* show error */

   object1.A::func();
    object1.B::func();

    return 0 ;
}