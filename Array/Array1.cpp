#include <iostream>
using namespace std;
int main()
{
    // declere
    int num[15];

    // accessing an array
    cout << "value at 0 :" << num[0] << endl;
    cout << "value at 1 :" << num[1] << endl;
    cout << "value at 2 :" << num[2] << endl;

    // output give garbag value

    // initialising an array
    int second[3] = {5, 7, 11};
    // accesing an element
    cout << "value of index 2 :" << second[2] << endl;
    cout << endl;
    cout << endl;
    int third[15] = {2, 5};
    int n = 15;
    cout << "printing the array" << endl;
    // printing tha array
    for (int i = 0; i < n; i++)
    {
        cout << third[i] << " ";
    }
    cout << endl;

    // initialing all location with zero
    int fourth[10] = {0};
    n = 10;
    cout << "printing the array all element zero" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << fourth[i] << " ";
    }
    cout << endl;
    // initialing all location with one[not possible]
    int fifth[10] = {1};
    n = 10;
    cout << "printing the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << fifth[i] << " ";
    }

    return 0;
}