#include <iostream>
#include <array>

using namespace std;

int main(){

    std::array<int,5> arr = {{1,2,3,4,5}};
    for(int i: arr){
        cout<<i<<endl;
    }
    cout << arr.at(1)<<endl;
    cout << arr.front()<<endl;
    cout<<arr.back()<<endl;
    cout<<arr.data()<<endl;

}