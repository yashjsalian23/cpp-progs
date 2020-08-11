#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main(){
    int a[] {1,3,5};
    int b[] {2,4,6};
    array <int, 6> c;

    int i, min,max, j=0;
    for(i=0;i<3;i++){
        min = min(a[i],b[i]);
        max = max(a[i],b[i]);
        c.push(min);
        c.push(min);
        j = j + 2;
    }
}