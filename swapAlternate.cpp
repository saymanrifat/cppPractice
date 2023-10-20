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

    for (int i = 0; i < size; i += 2)
    {
        int firstV = arr[i];
        if ((i + 1) < size)
        {
            arr[i] = arr[i + 1];
            arr[i + 1] = firstV;
            // swap(arr[i], arr[i + 1]);
        }
    }

    // printArray(newArr, size);
}

int main()
{
    int size = 6;
    int myArray[6] = {1, 2, 3, 4, 5,6};
    swapElement(myArray, size);
    printArray(myArray, size);
    return 0;
}