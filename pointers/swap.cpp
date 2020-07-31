#include <iostream>

using namespace std;

void swap(int *a, int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main(){
    int a {10};
    int b {20};
    cout<<"Before swap"<<endl;
    cout<<a<<" "<<b<<endl;
    swap(&a, &b);
    cout<<"After swap"<<endl;
    cout<<a<<" "<<b<<endl;

    return 0;
}