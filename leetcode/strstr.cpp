#include <iostream>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0){return 0;}
        if(needle.size()>haystack.size()) {return -1;}
        
        int n = needle.size();
        int i,j;
        string temp = "";
        //cout<<n<< " "<<haystack.size()<<endl;
        for(i=0;i<haystack.size()-n+1;i++){
            temp ="";
            //cout<<temp<<endl;
            for(j=i;j<(i+n);j++){
                temp += haystack[j];
                //cout<<temp<<endl;
            }
            //cout<<temp<<endl;
            if(temp.compare(needle) == 0 ) {return i;}
        }
        return -1;
    }
};

int main(){

    Solution obj;
    cout<<obj.strStr("hello","ll");

    return 0;
}