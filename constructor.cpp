#include<iostream>
using namespace std;

class animal{
public:
int age;
string name;
animal(){
    this->age=0;
    this->name="shuresh";
    cout<<"i am inside the constructor";
}
animal(int a,string b){
     this->age=a;
     this->name=b;
     cout<<"i am inside the parametric constructor";
}
animal(animal &suresh){
     this->age=suresh.age;
     this->name=suresh.name;
}
};

int main(){
    //animal suresh;             default constructor
    animal suresh(23,"somu");    //parametric constructor
    cout<<endl;
    cout<<suresh.age<<endl;
    cout<<suresh.name<<endl;
    animal a=suresh;
    a.name[0]='r';
    cout<<a.age<<endl;
    cout<<a.name<<endl;

}