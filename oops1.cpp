/*in this code we learn how to make class and object and how we are accessing the data members and data functions*/
#include<iostream>
using namespace std;

class animal{
    public:
    string color;                       //data members
    string name;
    int age;
    
    
    void eats(){                        //member function
        cout<<"it eats plants";
    }

    void doing(){
        cout<<"it always feel sleepy";
    }
};

int main(){

animal shuresh;
shuresh.color="blue";
shuresh.name="dog";
shuresh.age=34;
cout<<shuresh.color<<endl; //accessability of datamembers through objects
cout<<shuresh.name<<endl;
cout<<shuresh.age<<endl;
shuresh.eats();//accessability of memberfunction through objects
cout<<endl;
shuresh.doing();
}