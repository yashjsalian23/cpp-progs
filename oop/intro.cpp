#include <iostream>
#include <string>

using namespace std;

class Player{
    //attributes
    public:
        string name;
        int age;

    //func definitions
    void dispName(){
        cout<<name<<endl;
    }
    void dispAge(){
        cout<<age<<endl;
    }
};

int main(){
    Player yash; //object
    Player salian;

    Player *ptr = new Player(); //dynamically creating class on the heap
    Player arr[] {yash, salian}; //array of obj 
    yash.name = "Yash";
    yash.age = 21;
    yash.dispName();
    yash.dispAge();

    ptr->name = "ptr name";
    ptr->age = 4;
    ptr->dispAge();
    ptr->dispName();

    return 0;
}