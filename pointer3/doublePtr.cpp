#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;
    cout << endl
         << endl
         << "code is running" << endl
         << endl;

    cout << "printing p " << p << endl;
    cout << "Address of p" << &p << endl;
    cout << *p2 << endl; // print address of p

// below code print same value 
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    return 0;
}