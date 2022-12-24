#include<iostream>
//#include "constructor.h"

using namespace std;
class Cat{
    private:
        bool happy;

    public:
    
     void speak(){
        cout<<"Meowww!"<<endl;
     }
    Cat(){

    cout<<"object is created"<<endl;
    }
    ~ Cat()
    {
    cout<<"object is deleted"<<endl;
    }
};
int main(){
    cout<<"starting of the program"<<endl;
    Cat bob;
    bob.speak();
    cout<<"Ending Program"<<endl;
    return 0;
}