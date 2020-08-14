#include <iostream>

using namespace std;

class Solution {
public:
    int trailingZeroes(int n) {
        long long int consta = 5, zeroes = 0;
        while(consta<=n){
            zeroes+=n/consta;
            consta*=5;
        }
        return zeroes;
    }
};

int main(){
    Solution obj;
    cout<<obj.trailingZeroes(554);
    return 0;
}

//refer https://www.geeksforgeeks.org/count-trailing-zeroes-factorial-number/