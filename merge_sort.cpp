#include <iostream>
using namespace std;

// Function to merge two sorted subarrays into one sorted array
void merge(int arr[], int left, int mid, int right) {
    // Find the sizes of two subarrays to merge
    int n1 = mid - left + 1; // size of left subarray
    int n2 = right - mid;    // size of right subarray

    int *L = new int[n1];
    int *R = new int[n2];
}