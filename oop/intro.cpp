#include <iostream>
#include <string>

using namespace std;

class Player{
    //attributes
    string name;
    int age;

    //func definitions
    void dispName(string s);
    void dispAge(int n);
};

int main(){
    Player yash; //object
    Player salian;

    Player *ptr = new Player(); //dynamically creating class on the heap
    Player arr[] {yash, salian}; //array of obj 

    return 0;
}