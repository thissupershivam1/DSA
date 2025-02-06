#include <iostream>
using namespace std;
//kadan's Algo
void maxSubarraySum(int arr[], int n) {
    int max_sum = arr[0];
    int curr_sum = arr[0];
    for (int i = 1; i < n; i++) {
        curr_sum = max(arr[i], curr_sum + arr[i]);
        max_sum = max(max_sum, curr_sum);
    }
    cout << max_sum;
}

int main() {
    int n=6;
    int arr[6]= {-2,-3,-4,-5,-6,-7};  
    maxSubarraySum(arr, n);
    return 0;  
}