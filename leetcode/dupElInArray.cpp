#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = nums.size();
        if(l<=1) {return l;}
        int i = 0, j = 1;
        while(j<=(nums.size()-1)){
            if(nums[i] == nums[j]){
                nums.erase(nums.begin()+j);
            } else {
                i++;
                j++;
            }
        }
        return nums.size();
    }   
};

int main(){
    Solution obj;
    vector<int> vec {1,1,1,2,4,6,6,7,9,9};
    vector<int> *v = &vec;
    cout<<obj.removeDuplicates(*v);


    return 0;
}