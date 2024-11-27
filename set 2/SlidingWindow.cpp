#include <iostream>
using namespace std;
int findMaxSumInWindow(int arr[], int n, int k) 
{
    if (n < k) 
	{
        cout << "Invalid" << endl;
        return -1;
    }
    int max_sum = 0;
    for (int i = 0; i < k; i++) 
	{
        max_sum += arr[i];
    }
    int current_sum = max_sum;
    for (int i = k; i < n; i++) 
	{
        current_sum += arr[i] - arr[i - k];
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}
int main() 
{
    int arr1[] = {100, 200, 300, 400};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 2;
    cout << "Maximum sum of " << k1 << " consecutive elements: "
         << findMaxSumInWindow(arr1, n1, k1) << endl;
}
