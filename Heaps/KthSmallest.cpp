#include <iostream>
#include <queue>
using namespace std;

int findKthSmallest(int arr[], int n, int k) {
    // Create a max heap
    priority_queue<int> maxHeap;

    // Insert the first k elements into the max heap
    for (int i = 0; i < k; i++) {
        maxHeap.push(arr[i]);
    }

    
    for (int i = k; i < n; i++) {
        if (arr[i] < maxHeap.top()) {
            maxHeap.pop();
            maxHeap.push(arr[i]);
        }
    }

    // The kth smallest element will be the maximum element in the max heap
    return maxHeap.top();
}

int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int kthSmallest = findKthSmallest(arr, n, k);
    cout << "The " << k << "th smallest element is: " << kthSmallest << endl;

    return 0;
}

