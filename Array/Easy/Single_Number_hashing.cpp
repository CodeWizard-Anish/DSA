#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {

    vector<int> nums = {4,1,2,1,2};

    unordered_map<int,int> freq;

    // TODO:
    // Count frequencies
    // Find frequency = 1
    for(int x:nums){
        freq[x]++;
    }
    for(auto it:freq){
        if(it.second==1){
            cout<<it.first<<" ";
        }
    }

    return 0;
}