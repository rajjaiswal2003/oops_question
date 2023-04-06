#include<iostream>
using namespace std;

class param{
    public:
    int value;

    void operator+(param&obj2){
        int value1=this->value;
        int value2=obj2.value;
        cout<<value2-value1<<endl;
    }
};

int main(){
    param obj1,obj2;
    obj1.value=10;
    obj2.value=6;
    obj1+obj2;
    return 0;
}