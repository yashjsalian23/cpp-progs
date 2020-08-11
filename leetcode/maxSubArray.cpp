#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_max = nums[0];
        int global_max = nums[0];
        int i;
        
        for(i=1;i<nums.size();i++){
            current_max = max(nums[i],(nums[i]+current_max));
            if(current_max > global_max){
                global_max = current_max;
            }
        }
        return global_max;
        
    }
};

int main(){
    vector <int> vec {-2,1,-3,4,-1,2,1,-5,4};
    Solution obj;
    cout<<obj.maxSubArray(vec);

    return 0;
}