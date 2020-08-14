#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num = 0;
        
        for(int i=0;i<nums.size();i++){
            num = num^nums[i];
        }
        return num;
    }
}; 

int main(){
    vector <int> vec {4,1,2,1,2};
    Solution obj;
    cout<<obj.singleNumber(vec);

    return 0;
}