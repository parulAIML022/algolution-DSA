#include <iostream>
using namespace std;
int findEquilibriumIndex(int arr[], int n) {
    int totalSum = 0;
    int leftSum = 0; 
    for (int i = 0; i < n; i++) 
	{
        totalSum += arr[i];
    }
    for (int i = 0; i < n; i++) 
	{
        totalSum -= arr[i];
        if (leftSum == totalSum) 
		{
            return i + 1;
        }
        leftSum += arr[i];
    }
    return -1;
}
int main() 
{
    int arr[] = {1, 3, 5, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findEquilibriumIndex(arr, n);
    if (result != -1) 
	{
        cout << "Equilibrium index" << result << endl;
    } 
	else 
	{
        cout << "No equilibrium index exists." << endl;
    }
    return 0;
}
