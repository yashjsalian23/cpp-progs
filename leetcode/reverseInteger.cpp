#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        if(x> INT_MAX || x<INT_MIN) {return 0;};
        long long int rev = 0;
        bool isNeg = false;
        if(x == INT_MIN) {x=INT_MAX;};
        if(x<0 && x!=INT_MIN){
            isNeg = true;
            x = x * (-1);
        }
        
        while(x!=0){
            rev = rev*10+(x%10);
            x = x/10;
        }
        if(rev>INT_MAX) {return 0;};
        
        if(isNeg) {return -rev;};
        return rev;
    }
};

int main(){
    Solution obj;
    cout<<obj.reverse(10214);

    return 0;
}