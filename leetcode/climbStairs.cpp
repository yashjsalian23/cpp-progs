#include <iostream>

using namespace std;
//calculate fibo
class Solution {
public:
    int climbStairs(int n) {
        int a=1,b=2,c;

        if(n==0){return 0;}
        if(n<=2){return n;}
       
        for(int i=2;i<n;i++){
            c = a+b;
            a = b;
            b = c;
        }
        return c;
    }
};

int main(){
    Solution obj;
    cout<<obj.climbStairs(44);

    return 0;
}

