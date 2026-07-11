/*
Problem:
Count pairs (i,j) such that:

i < j
arr[i] > arr[j]

Example:
Input:
[5,3,2,4,1]

Output:
8

Pattern Learned:
Merge Sort Application

Concepts:
- Divide and Conquer
- Counting while merging

Expected Complexity:
Time: O(n log n)
Space: O(n)
*/
#include <iostream>
#include <vector>
using namespace std;

long long merge(vector<int>& arr, int low, int mid, int high) {

    vector<int> temp;

    int left = low;
    int right = mid + 1;

    long long count = 0;

    while (left <= mid && right <= high) {

        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            count += (mid - left + 1);

            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

    return count;
}

long long mergeSort(vector<int>& arr, int low, int high) {

    if (low >= high)
        return 0;

    int mid = low + (high - low) / 2;

    long long count = 0;

    count += mergeSort(arr, low, mid);

    count += mergeSort(arr, mid + 1, high);

    count += merge(arr, low, mid, high);

    return count;
}

int main() {

    vector<int> arr = {5,3,2,4,1};

    cout << mergeSort(arr, 0, arr.size() - 1);

    return 0;
}