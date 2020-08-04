#include <iostream>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        int i;
        int d = 0;
        for(i = 0;i<s.size();i++){
            if((s[i] == 'I') && (i+1!=s.size()) && (s[i+1] == 'V' || s[i+1] == 'X') ){
                d = convert(s[i+1]) - 1;
                i++;
            } else if(s[i] == 'X' && (s[i+1] == 'L' || s[i+1] == 'C') && (i+1!=s.size())){
                d = convert(s[i+1]) - 10;
                i++;
            } else if(s[i] == 'C' && (s[i+1] == 'D' || s[i+1] == 'M') && (i+1!=s.size())){
                d = convert(s[i+1]) - 100;
                i++;
            } else {
                d = convert(s[i]);;
            }
            //cout<<d<<endl;
            num = num + d;
        }
        return num;
    }
    
    int convert(char ch){
        switch(ch){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
};

int main(){
    Solution obj;
    cout<<obj.romanToInt("IVXD");
    return 0;
}