#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i,len = digits.size();
        for(i=len-1;i>=0;i--){
           if(digits[i]!=9){
               digits[i] = digits[i] + 1;
               break;
            }
             digits[i] = 0;
            if(i!=0 && digits[i-1]!=9 ){
                digits[i-1] = digits[i-1] + 1;
                break;
            }
            if(i==0){
                digits.push_back(0);
                digits[0] = 1;
                
            }
            
        }
        return digits;
    }
};

int main(){
    vector <int> vec {1,9,9,9};
    Solution obj;
    obj.plusOne(vec);

    return 0;
}