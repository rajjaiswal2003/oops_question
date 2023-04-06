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

};
int main(){
dog d1;
cout<<d1.age;
}