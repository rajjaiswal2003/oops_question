//function overloading

#include<iostream>
using namespace std;

class animal{

public:
int age;

int sum(int a,int b){
    cout<<"i am in first";
    return a+b;
    
}
int sum(int a,int b,int c){
    cout<<"i am in second";
    return a+b+c;
    
}
int sum(int a,float b){
    cout<<"i am in third";
    return a-b;
}
};

int main(){
    animal a;
    cout<<a.sum(2,3)<<endl;
    cout<<a.sum(2,3,4)<<endl;
    cout<<a.sum(2,5.13f)<<endl;
}