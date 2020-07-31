#include <iostream>

using namespace std;

void doubleVal(int *p){
    *p *=2;
}

int main(){
    int val {10};
    int *p {nullptr};
    cout<<val<<endl;
    doubleVal(&val);
    cout<<val<<endl;
    p = &val;
    doubleVal(p);
    cout<<val<<endl;

    return 0;
}