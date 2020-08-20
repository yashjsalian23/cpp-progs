#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Soln{
    public:
    string numToText(int num){
          string oneArray[] = {"zero","one","two","three","four","five","six","seven","eight","nine",
        "ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};

        string tensArray[] = {"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

        if(num==100){
            return "hundred";
        }

        if(num<=19){
            return oneArray[num];
        }
        int d,r;
        string temp = "";
        if(num>19){
            d = num/10;
            r = num%10;
            if(r==0){
                temp = tensArray[d];
            } else {
                temp = tensArray[d] + oneArray[r];
            }
        }
        return temp;
    }

    string calVal(vector<int>& vec){
        unsigned int sum = 0, i,j,d,r;
        string temp;
        for(i=0;i<vec.size();i++){
            temp = numToText(vec[i]);
            //cout<<temp<<endl;
            for(j=0;j<temp.size();j++){
                if(temp[j]=='a' || temp[j]=='e'|| temp[j]=='i'||temp[j]=='o'||temp[j]=='u'){
                    sum++;
                }
            }
        }

       
        unsigned int count = 0, a;
        i=0;j=vec.size()-1;
        sort(vec.begin(),vec.end());
        while(i<j){
            a = vec[i]+vec[j];
            if(a == sum){
                count++;
                i++;j--;
            } else if(a>sum){
                j--;
            } else if(a<sum){
                i++;
            }
        }
        return numToText(count);
    }

};

int main(){
    int n,i,t;
    cin>>n;
    vector <int> vec;
    vec.reserve(n);
    for(i=0;i<n;i++){
        cin>>t;
        vec.push_back(t);
    }
    Soln obj;

    cout<<obj.calVal(vec);

    return 0;
}