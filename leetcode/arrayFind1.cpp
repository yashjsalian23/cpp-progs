/* Given a sorted array and a target value,
return the index if the target is found. If not, return the index where it would be if it were inserted in order. */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto it = find(nums.begin(),nums.end(),target);
        int index = it-nums.begin();
        int l = nums.size();
        if(index<l){
            return index;
        }
        
        for(int i=0;i<l;i++){
            if(target<nums.at(0)){return 0;}
            if(target>nums.at(l-1)){return l;}
            if(target>nums.at(i) && target<nums.at(i+1)){
                return i+1;
            }
        }
        return -1;
    }

    int searchInsertOptimized(vector <int> & nums, int target){
        for(int i=0;i<nums.size();i++){
            if(nums[i]>target){return i;}
        }
        return nums.size();
    }
};

int main(){
    vector <int> vec {1,2,4,5,6};
    Solution obj;
    int op = obj.searchInsert(vec,3);
    cout<<op<<endl;
    op = obj.searchInsertOptimized(vec,3);
    cout<<op<<endl;
    return 0;
}