//in this we have learnt that for static we don't have to write destructor it will automatically called and for dynamically we have to manually delete it
#include<iostream>
using namespace std;

class animal{

public:
int age;
string name;

~animal(){
    cout<<"i am inside the distructor";
}
};

int main(){
    // animal a;
    // a.age=23;
    // a.name="rajjaiswal";
    // cout<<a.age;
    // cout<<a.name;
    // cout<<endl;

    animal *a=new animal;
    a->age=23;
    a->name="rajjaiswal";
    cout<<a->age;
    cout<<a->name;
    delete a;
}