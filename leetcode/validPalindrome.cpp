#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.size();
        if(len == 0){return true;}
        
        int i;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string st = "";
        //cout<<s<<endl;
        for(i=0;i<len;i++){
            if((s[i]>='a' && s[i]<='z') || s[i]>='0' && s[i]<='9'){
                st+=s[i];
            }
        }
        //cout<<st<<endl;
        for(i=0;i<(st.size()/2);i++){
            if(st[i]!=st[st.size()-(i+1)]){
                return false;
            }
        }
        return true;
    }
};

int main(){
    Solution obj;
    cout<<obj.isPalindrome("malayalam");

    return 0;
}