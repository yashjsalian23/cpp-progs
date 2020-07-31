#include <iostream>

using namespace std;

template <typename T> //can have multiple data types like T1, T2
T Max(T a, T b){
    return (a>b)? a : b;
}

int main(){
    cout<<Max<int>(5,7)<<endl;
    cout<<Max(8,99)<<endl;
    cout<<Max('c','r')<<endl;

    return 0;
}