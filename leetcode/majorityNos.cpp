#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> fcounter;
        int i;
        for(i=0;i<nums.size();i++){
            fcounter[nums[i]]++;
        }
        int max_val = INT_MIN, nos;
        for(auto it: fcounter){
            if(it.second>max_val){
                max_val = it.second;
                nos = it.first;
            }
        }
        return nos;
    }
};

int main(){
    vector <int> vec {1,5,4,4,5,1,2,3,3,3};
    Solution obj;
    cout<<obj.majorityElement(vec);


    return 0;
}