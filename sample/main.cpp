#include <iostream>

using namespace std;

class Solution{
    public:
    //func defn
    void soln(int n, string source, string dest, string temp){
        //edge case
        if(n == 1){
            cout<<n<<" from "<<source<<" to "<<dest<<endl;
        } else {
            //first move from source to temp
            soln(n-1,source,temp,dest);
            //move last from source to dest
            cout<<n<<" from "<<source<<" to "<<dest<<endl;
            //move from temp to dest
            soln(n-1,temp,dest,source);
        }
    }
};

int main(){
    Solution obj;
    int n;
    cout<<"enter n:";
    cin>>n;
    obj.soln(n,"source","destination","temp");
    return 0;
}
