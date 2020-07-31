#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> vector1;
    vector <int> vector2;
    vector <vector<int>> vector_2d;
    int i,j;

    cout<<"vector1\n";
    vector1.push_back(10);
    vector1.push_back(20);
    cout<<vector1.at(0)<<endl<<vector1.at(1)<<endl<<vector1.size()<<endl;

    cout<<"vector2\n";
    vector2.push_back(100);
    vector2.push_back(200);
    cout<<vector2.at(0)<<endl<<vector2.at(1)<<endl<<vector2.size()<<endl;

    vector_2d.push_back(vector1); //copy is added
    vector_2d.push_back(vector2); //copy is added
    cout<<"vector2D\n";
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<vector_2d[i][j]<<endl;
        }
    }

    vector1.at(0) = 7777;
    cout<<"vector2D\n";
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<vector_2d[i][j]<<endl;
        }
    }

}