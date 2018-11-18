#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

bool isMeasurable (vector<int> &weights , int target,int i , int sum){
    if(sum==target)
        return true;
    if(i==weights.size())
        return false;
    return isMeasurable(weights,target,i+1,sum+weights[i])||isMeasurable(weights,target,i+1,sum);


}
int main(){


    int target =4;
    vector<int>v={1,3};
    cout<<isMeasurable(v,target,0,0);




    return 0;
}


