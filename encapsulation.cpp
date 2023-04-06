//encapsulation basically means wrapping up the data members and member function into a bigger entity or hiding up the irrelevant data....

#include<iostream>
using namespace std;

class animal{

private:
int age;
string name;
public:
void eat(){
    cout<<"it eats plants";
}
void doing(){
    cout<<"it always feel sleepy";
}

};
int main(){
animal a;
a.eat();
cout<<endl;
a.doing();
}