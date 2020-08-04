#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        vector<char> vec;
        if(s.size() == 0){return true;}
        
        map<char ,char> lookup {
            {'(',')'},
            {'{','}'},
            {'[',']'},
        };
        
        for(int i =0;i<s.size();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                vec.push_back(s[i]);
            } else if(s[i]==')'||s[i]=='}'||s[i]==']'){
                if(vec.size() == 0) {return false;}
                char temp = vec[vec.size()-1];
                vec.pop_back();
                if(lookup[temp]!=s[i]){
                    return false;
                }
            }
        }
        if(vec.size() == 0) {return true;}
        return false;
    }
};

int main(){
    Solution obj;
    cout<<obj.isValid("[[[]]]");


    return 0;
}