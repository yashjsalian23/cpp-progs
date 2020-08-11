#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
    public:
        int twoSets(vector<int>& vec1,vector<int>& vec2){
            sort(vec1.begin(),vec1.end());
            sort(vec2.begin(),vec2.end());

            int count = 0;
            int i;
            int c1,c2;
            for(i=vec1[0];i<=vec2[0];i++){
                c1=0;c2=0;
                for(auto it: vec1){
                    if(i%it!=0){
                        c1=1;break;
                    }
                }
                if(c1==1){continue;}
                for(auto t: vec2){
                    if(t%i!=0){
                        c2=1;break;
                    }
                }
                if(c1==0 && c2==0){count++;}
            }
            return count;
        }
};

int main(){

    vector <int> v1 {2,4};
    vector <int> v2 {16,32,96};
    Solution obj;
    int op = obj.twoSets(v1,v2);
    cout<<op;
    return 0;
}