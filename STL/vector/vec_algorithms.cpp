#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
void disp(vector<T> vec){
    for_each(vec.begin(), vec.end(), [](T x){cout<<x<<endl;});
}

int main(){
    vector<int> vec1 {1,2,3,4,5};
    vector<int> vec2 {10,20,30,40,50};
    disp(vec1);

    vec1.shrink_to_fit(); //capactiy = size
    vec1.reserve(100); // will reserve 100 element's memory initially.



    return 0;
}