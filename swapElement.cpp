#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void swapElement(int arr[], int size)
{
    int newArr[size];

    for (int i = 0; i < size; i++)
    {
        newArr[size - i - 1] = arr[i];
    }

    arr = newArr;

    // printArray(newArr, size);
}
int main()
{
    int myArray[4] = {2, 5, 3, 4};

    swapElement(myArray, 4);

    // int size = sizeof(myArray) / sizeof(int);
    printArray(myArray, 4);

    return 0;
}
