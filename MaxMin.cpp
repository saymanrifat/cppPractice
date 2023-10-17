#include <iostream>
using namespace std;
int main()
{
    int myArre[] = {12, 16, 2, 4, -7, 10, 22, -33, 0};

    int size = sizeof(myArre) / sizeof(int);

    int biggest = 0;

    for (int i = 0; i < size; i++)
    {
        if (biggest > myArre[i])
        {
            biggest = myArre[i];
        }
    }

    cout << biggest << endl;

    return 0;
}
