#include <iostream>
using namespace std;

int main () {
  int *p = nullptr;
    int k = 10;
    p = &k;
    cout<<sizeof p<<endl;
    cout<<p<<endl;
    cout<<k<<endl;
    cout<<&k<<endl;
    cout<<*p<<endl;

    return 0;
}
