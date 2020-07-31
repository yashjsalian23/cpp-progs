#include <iostream>
#include <vector>

using namespace std;

void dispVec(const vector<string> *vec){
    for(auto i: *vec){
        cout<<i<<endl;
    }
}


int main(){
    vector <string> b  {"yash","salian","cpp"};
    int arr[] {10,20,30};
    dispVec(&b);
    //dispArr(&arr);

    return 0;
}