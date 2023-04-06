/*in this code we learn how to access the private datamembers by using getter and setter*/
#include<iostream>
using namespace std;

class animal{
    public:
    string color;                       //data members
    string name;
    private:
    int age;

    public:
    int getage(){                     //getter
        return age;
    }
    void setage(int age){             //setter
        this->age=age;
    }
};

int main(){

animal shuresh;
shuresh.setage(100);
cout<<shuresh.getage();


}