#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> vec {10,2,3,6,454,7,5,4};
    auto it = vec.begin();//points to start 10 2 3 6 454 7 5 4 end
    auto it1 = vec.end(); //points to end
    auto it2 = vec.rbegin(); //points to end. to traverse we need to incremeant
    auto it3 = vec.rend(); //points to beginning end 4 5 7 454 6 3 2 10
    //cbegin and cend are constant iterators
    while(it != vec.end()){
        cout<<*it<<endl;
        ++it;
    }


    return 0;
}