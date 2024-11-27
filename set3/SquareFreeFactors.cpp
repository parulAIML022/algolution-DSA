#include <iostream>
#include <cmath>
using namespace std;
int factors(int n, int arr[])
 {
    int index = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            arr[index] = i;
            index++;
        }
    }
    return index;
}
bool isPerfectSquare(int num)
 {
    int sr = sqrt(num);
    return (sr * sr == num);
}
int getPerfectSquare(int arr[], int size, int ps[]) {
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (isPerfectSquare(arr[i])) {
            ps[index] = arr[i];
            index++;
        }
    }
    return index;
}
int squareFreeFactors(int arr[], int size, int ps[], int numPerfectSquares, int sf[])
{
    int index = 0;
    for (int i = 0; i < size; i++)
	 {
        for (int j = 0; j < numPerfectSquares; j++) {
            if (ps[j] != 1 && arr[i] % ps[j] == 0) 
			{
                goto nextFactor;
            }
        }
        sf[index++] = arr[i];
        nextFactor:; 
		}
    return index;
}
int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    const int m_size= 100;
    int fac[m_size], ps[m_size], sf[m_size];
    int numFactors = factors(n, fac);
    cout << "Factors of the given integer are: ";
    for (int i = 0; i < numFactors; i++) 
	{
        cout << fac[i] << " ";
    }
    cout << endl;
    int numPerfSq = getPerfectSquare(fac, numFactors, ps);
    cout << "Out of all the factors, the perfect square numbers are: ";
    for (int i = 0; i < numPerfSq; i++) 
	{
        cout << ps[i] << " ";
    }
    cout << endl;

    int numSquareFree = squareFreeFactors(fac, numFactors,ps, numPerfSq, sf);
    cout << "Square-free factors are: ";
    for (int i = 0; i < numSquareFree; i++) 
	{
        cout << sf[i] << " ";
    }
    cout << endl;
    return 0;
}

