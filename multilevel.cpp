#include<iostream>
using namespace std;

class animal{
    public:
    int age;
    animal(){
        this->age=34;
    }
};

class dog:public animal{
    public:
    string color;
    dog(){
        this->color="blue";
    }
};

class dogadmin:public dog{

};
int main(){
dog d1;
cout<<d1.age;
dogadmin leo;
cout<<leo.age;
cout<<leo.color;
}