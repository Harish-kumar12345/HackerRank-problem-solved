#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the array element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
            i++;
        arr[i] = arr[j];
    }
    int newlenght = i + 1;
    cout << "After the removing duplicate number" << endl;
    for (int k = 0; k < newlenght; k++)
    {
        cout << arr[k] << " ";
    }

    return 0;
}