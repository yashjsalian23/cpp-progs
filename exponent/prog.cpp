#include <iostream>

using namespace std;

int expo(int a,int b){
    int i, result = 1;
    for(i=1;i<=b;i++){
        result *= a;
    }
    return result;
}

int main(){
    int a,b;
    cout <<"enter: \n";
    cin >>a>>b;
    cout << expo(a,b);
}