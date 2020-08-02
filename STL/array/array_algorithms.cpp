#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>
using namespace std;

void disp(array<int,5> arr){
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    array<int, 5> arr1 {10,4,7,5,4};
    disp(arr1);
    //pointer to array
    array<int, 5> arr2 {1,2,3,5,5};     // double {{ }} is C++ 11
    disp(arr2); 
    int *ptr = arr2.data();
    cout << ptr << endl;
    *(ptr + 1) = 0;
    disp(arr2);

    //sort:ascending
    sort(arr2.begin(),arr2.end());
    disp(arr2);

    //sort:descending
    sort(arr2.begin(),arr2.end(), greater<int>());
    disp(arr2);

    auto min = min_element(arr2.begin(),arr2.end()); //returns pointer to the element
    auto max = max_element(arr2.begin(),arr2.end()); //returns pointer to the element
    cout<<*max<<" "<<*min<<endl;

    //freq of num
    int Count = count(arr2.begin(),arr2.end(),5);
    cout<<"count: "<<Count<<endl;

    //count with condn
    int c = count_if(arr2.begin(),arr2.end(), [](int x) { return x>2 && x<6; });
    cout<<"count: "<<c<<endl;
    
    return 0;
}