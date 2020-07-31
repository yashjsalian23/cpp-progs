#include <iostream>

using namespace std;

int cal(int n){
    return n%2;
}

int main(){
    int num;
    cout << "enter: \n";
    cin >> num;
    cout << cal(num);
}