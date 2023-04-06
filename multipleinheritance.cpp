#include<iostream>
using namespace std;

class animal{
   public:
   int age=20;
};
class humans{
    public:
    int height=6;
};
class both:public animal,public humans{

};
int main(){
both a;
cout<<a.age;
cout<<endl;
cout<<a.height;
}