#include <iostream>
using namespace std;

int main()
{
    int myArre[] = {12, 16, 2, 4, -7, 10, 22, -33, 0};

    int size = sizeof(myArre) / sizeof(int);

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += myArre[i];
    }

    cout << sum << endl;

    return 0;
}
