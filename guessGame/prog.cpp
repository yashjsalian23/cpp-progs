#include <iostream>

using namespace std;

int main(){
    int secret = 88;
    int guess,count = 5;

    while(secret != guess){
        //if(count == 0) {count = -1; break;}
        cout<<"enter guess, you have remaining: \n";
        cin>>guess;
       //count--;

    }
    if(count == -1){
        cout<<"guess over";
    } else {
          cout<<"you win!!";
    }
  

}