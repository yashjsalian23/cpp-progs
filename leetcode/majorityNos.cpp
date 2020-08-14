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

    int majorityElementUsingMoore(vector<int>& nums) {
        int maj = nums[0], count = 1,i;
        for(i=1;i<nums.size();i++){
            if(nums[i]==maj){count++; continue;}
            if(count != 0){count--;}
            else{
                maj = nums[i];
                count = 1;
            }
        }
        return maj;
    }
};

int main(){
    vector <int> vec {1,5,4,4,5,1,2,3,3,3};
    Solution obj;
    cout<<obj.majorityElement(vec)<<endl;
    cout<<obj.majorityElementUsingMoore(vec)<<endl;

    return 0;
}