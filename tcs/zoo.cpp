#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct Data
{
    int cost;
    int maxArea;
    int minArea;

};

class Soln{
    public:
    int calPrice(Data a[], int totalArea){
        vector <int> order;
        int i, max=(-2147483647 - 1);
        for(i=0;i<3;i++){
            if(a[i].cost>max){
                max=a[i].cost;
                order.insert(order.begin(),i);
            } else {
                order.push_back(i);
            }
        }
        int t;
        if(a[order[1]].cost>a[order[2]].cost){
            t=order[1];
            order[1]=order[2];
            order[2]=t;
        }
        int cost=0,index;
        index=order[0];
        cost+=a[index].minArea*a[index].cost;
        totalArea-=a[index].minArea;
        index=order[1];
        cost+=(min((totalArea-a[order[2]].minArea),a[index].maxArea))*a[index].cost;
        totalArea-=a[index].maxArea;
        index=order[2];
        cost+=totalArea*a[index].cost;
        return cost;
    }

};

int main(){

    Data arr[3];
    int i,temp,t;
    for(i=0;i<3;i++){
        cin>>temp;
        arr[i].cost = temp;
    }
    for(i=0;i<3;i++){
        cin>>temp;
        arr[i].maxArea = temp;
    }
    for(i=0;i<3;i++){
        cin>>temp;
        cin>>t;
        arr[i].minArea = temp*t;
    }
    int totalArea;
    cin>>totalArea;
    //cout<<arr[2].maxArea;
    Soln obj;
    cout<<obj.calPrice(arr,totalArea);



    return 0;
}
