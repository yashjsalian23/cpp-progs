#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, choice;

    cout << "Enter the nos: " << endl;
    cin >> a >> b;
    cout << "Enter choice (1-add, 2-sub, 3-mul, 4-div): \n";
    cin >> choice;

    switch(choice){
        case 1 :
            cout << "Sum is: " << a+b << endl;
            break;
        case 2 :
            cout << "Sub is: " << a-b << endl;
            break;
        case 3 :
            cout << "Mul is: " << a*b << endl;
            break;
        case 4 :
            cout << "Div is: " << a/b << endl;
            break;
        default : cout << "Invalid choice\n";
        
    }
    
}