#include <iostream>
#include <string>

using namespace std;

#include<string.h> 
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length();
        int i;
        int c = 0;
        int temp = 0;
        for(i=0;i<len;i++){
            if(s.at(i)==' '){
                c = 0;
                continue;
            }
          
           c++;
            temp=c;
        }
        return temp;
    }

    int lengthOfLastWordSecond(string s){
        int len = s.length();
        int i;
        string temp = "";
        string st = "";
        for(i=0;i<len;i++){
            if(s.at(i)==' '){
                temp="";
                continue;
            }
          
            temp +=s[i];
            st=temp;
        }
        return st.size();
    }
};

int main(){
    string s = "b  ";
    Solution obj;
    cout<<obj.lengthOfLastWord(s)<<endl;
    cout<<obj.lengthOfLastWordSecond(s);
    return 0;
}