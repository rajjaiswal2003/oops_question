#include<iostream>
using namespace std;

class animal{
    public:
    string name;
    int age;

    void eats(){
        cout<<"it eats the plants";
    }
};

int main(){

animal *suresh=new animal;
//suresh->age=23; one method to dynamically access the data members
(*suresh).age=23; //another method to dynamically access the data members
cout<<suresh->age<<endl;
suresh->eats();
}