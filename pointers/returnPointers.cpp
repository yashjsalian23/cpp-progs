#include <iostream>

using namespace std;

int *createArr(size_t size, int initVal=0){
    int *arrPtr {nullptr};
    arrPtr = new int[size];
    for(size_t i = 0;i<size;i++){
        *(arrPtr+i) = initVal;
    }
    return arrPtr;
}

int main(){
    int *arrPtr {nullptr};
    arrPtr = createArr(10,5);

    for(int i = 0;i<10;i++){
        cout<<*(arrPtr+i)<<endl;
    }

    delete [] arrPtr;
    return 0;
}