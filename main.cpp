#include <iostream>

using namespace std;

class BaseClass{
public:
    virtual void print(){
        cout<<"print base class"<<endl;
    }
    void show(){
        cout<<"show base class"<<endl;
    }
};

class Derived : public BaseClass{
public:
    void print(){
        cout<<"print derived class"<<endl;
    }
    void show(){
        cout<<"show derived class"<<endl;
    }
};


int main()
{
    BaseClass *baseObj;
    Derived deriveObj;
    baseObj = &deriveObj;

    //Virtual function, binded at runtime (Runtime Polymorphism)
    baseObj->print();

    //Non-virtual function, binded at compile time.
    baseObj->show();

    return 0;
}
