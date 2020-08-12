#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<=1){return 0;}
        int min_val = INT_MAX;
        int i;
        int max_val = 0;
        for(i=0;i<prices.size();i++){
            if(prices[i]<min_val){
                min_val = prices[i];
                continue;
            }
            max_val = max(max_val,prices[i]-min_val);
            }
        
        return max_val;
    }
};

int main(){
    vector <int> vec {7,8,5,10,1};
    Solution obj;
    cout<<obj.maxProfit(vec);
    return 0;
}