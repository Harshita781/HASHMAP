#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int maximumFrequency(vector<int> &arr,int n){
    unordered_map<int,int> count;
    int maxFreq=0;
    int maxAns=0;
    for(int i=0;i<arr.size();i++){
        count[arr[i]]++;
        maxFreq=max(maxFreq,count[arr[i]]);
    }
    for(int i=0;i<arr.size();i++){
        if(maxFreq==count[arr[i]]){
            maxAns=arr[i];
            break;
        }
    }
    return maxAns;
}
int main(){
    vector<int> arr={1,2,4,1,6,7,3,8,2,0,2};
    int n=arr.size();
    cout<<maximumFrequency(arr,n);
    return 0;
}