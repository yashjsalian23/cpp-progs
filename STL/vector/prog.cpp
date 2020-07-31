#include <vector>
#include <iostream>
#include <algorithm> //needed to use STL algos
using namespace std;


int main() {
    //declaring
    vector <int> vec; //empty vec. need to use push_back to add elements
    vector <int> v {1,2,3,4,5}; //vector of 5 elem
    vector <int> v1 (5); //vector of 5 elem all intialized with zero. can change it
    vector <int> v2 (5,10); //vector of 5 elem all with value 10
    vector <vector<int>> v3 { //2-d vector 
        {1,2,3},
        {2,3,4},
        {3,4,5}
    };

    //accessing elements
    cout<<v[0]; //no bound exception thrown
    cout<<v.at(0); //throws bound exception if exceeds length

    //modifying vectors
    v.at(2) = 7; //no error
    v.at(3) = 7; //out of bound exveption
    v.push_back(5); //adds 5 at the end of vector

    //algos
    auto loc = find(v.begin(),v.end(),5); //start, end , el to find. If el is not there it points to end()

    //other methods
    v.size(); //returns the size of vector
    v.capacity(); //returns the max capacity of vector

  

    return 0;
}