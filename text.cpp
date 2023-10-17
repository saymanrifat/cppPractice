#include <iostream>

using namespace std;

void printTheArrey(char values[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << values[i] << " ";
    }
    cout << endl;
}

int main()
{
    char arr[] = {'A', 'B', 'C'};
    printTheArrey(arr, 3);
    cout << sizeof(arr) / sizeof(int);

    return 0;
}
