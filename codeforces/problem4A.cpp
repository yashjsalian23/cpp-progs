#include <iostream >
#include <array>

using namespace std;

int main(){
    int w;
    cin>>w;
    array <string, 2> arr {"YES","NO"};
    cout<<arr[w%2];
    
    return 0;
}