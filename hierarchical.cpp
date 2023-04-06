#include<iostream>
using namespace std;

class a{
    public:
    int age=19;
};
class b:public a{
    public:
    int height=6;
};
class c:public a{
    public:
    string color="red";
};

int main(){
cout<<"first class output"<<endl;
b first;
cout<<first.age<<endl;
cout<<first.height<<endl;
cout<<"second class output"<<endl;
c second;
cout<<second.age<<endl;
cout<<second.color<<endl;

}