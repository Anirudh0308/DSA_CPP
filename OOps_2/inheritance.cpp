 #include<iostream>
using namespace std;

class Human{
    public:
    string name;
    int age;
    int height;
    int weight;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight = w;
    }
};

class Male: public Human{
    public:
    string color;

    void sleep(){
        cout<<"male is Sleeping" << endl;
    }
};

int main(){
    Male oblect1;
    cout<< oblect1.age << endl;
    cout<< oblect1.weight << endl;
    cout<< oblect1.height << endl;
    cout<< oblect1.color << endl;

    oblect1.setWeight(84);
     cout<< oblect1.weight << endl;
    oblect1.sleep();

    return 0;
}