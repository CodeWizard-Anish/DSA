/*
Problem:
Minimum day to make bouquets.

Example:

Input:
bloomDay = [1,10,3,10,2]
m = 3
k = 1

Output:
3

Pattern Learned:
Binary Search on Answer

Concepts:
- Feasibility Check

Expected Complexity:
Time: O(n log maxDay)
Space: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;
bool possible(vector<int>& arr,int day,int m,int k){
        int count =  0;
        int NofB = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i] <= day){
                count++;
                if(count == k){
                    NofB++;
                    count = 0;
                }
            }else{
                count = 0;
            }
        }
        return NofB >= m;
    }
    int minDays(vector<int>& bloomDay,int m,int k){
        int n = bloomDay.size();
        if(n < m*k) return -1;
        int low = 1;
        int high = 0;
        for(int i=0;i<n;i++){
            high = max(high,bloomDay[i]);
        }
        int ans = -1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(possible(bloomDay,mid,m,k)){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
int main(){

    vector<int> bloomDay = {1,10,3,10,2};
    int m = 3;
    int k = 1;

    // TODO:
    // Bouquet Logic
    
    
    cout << minDays(bloomDay,m,k) << endl;

    return 0;
}