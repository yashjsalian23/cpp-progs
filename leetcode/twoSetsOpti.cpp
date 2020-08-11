#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
    public:
    int gcd(int a, int b){
        if(b==0){return a;}
        return gcd(b, a%b);
    }

    int gcdArray(vector<int>& vec){
        int ans = vec[0];
        for(int i=1;i<vec.size();i++){
            ans = gcd(vec[i],ans);
            if(ans==1){return 1;}
        }
        return ans;
    }

    int lcmArray(vector<int>& vec){
        int ans = vec[0];
         for (int i=1; i<vec.size(); i++) 
            ans = (((vec[i] * ans)) / 
                (gcd(vec[i], ans))); 
  
        return ans;
    }

    int twoSetOpti(vector<int>& vec1,vector<int>& vec2){
        int gcd = gcdArray(vec2);
        int lcm = lcmArray(vec1);
        

    }
};