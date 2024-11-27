#include<iostream>
using namespace std;

int* naiveapp(int arr[], int n, int x, int &result_size)
{
    int i;
    int* resultarray = new int[2 * (n / 2)];
    int resultindex = 0;
    for(i = 0; i < n - 1; i++)
    {
        if(arr[i] + arr[i + 1] == x)
        {
            resultarray[resultindex++] = arr[i];
            resultarray[resultindex++] = arr[i + 1];
        }
    }
    result_size = resultindex;
    return resultarray;
}

int main()
{
    int n, x;
    
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int* arr = new int[n];
    
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "Enter the sum you want to find: ";
    cin >> x;
    
    int result_size = 0;
    int* result = naiveapp(arr, n, x, result_size);
    
    if(result_size == 0)
    {
        cout << "No pairs found that add up to " << x << endl;
    }
    else
    {
        cout << "Pairs where arr[i] + arr[i+1] equals " << x << ": " << endl;
        for(int i = 0; i < result_size; i += 2)
        {
            cout << "(" << result[i] << ", " << result[i + 1] << ")" << endl;
        }
    }
    
    delete[] arr;
    delete[] result;
    return 0;
}

