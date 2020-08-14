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
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
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

     bool isPalindromeOpti(string s) {
        int len = s.length();
        if(len == 0){return true;}
        
        int i=0,j=len-1;
        while(i<j){
            //cout<<i<<" ";
            if(!isalnum(s[i]) && !isalnum(s[j])){
                i++;j--;
            } else if(!isalnum(s[i])){
                i++;
            } else if(!isalnum(s[j])){
                j--;
            } else if(tolower(s[i++])!=tolower(s[j--])){
                //cout<<i<<" "<<j<<" "<<len;
                return false;
            }
            //i++;j--;
           // cout<<i<<endl;
        }
        //cout<<i<<" "<<j<<" "<<len;
        return true;
    }
};

int main(){
    Solution obj;
    cout<<obj.isPalindrome("malayalam");

    return 0;
}