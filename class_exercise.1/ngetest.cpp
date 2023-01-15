#include <iostream>
using namespace std;
int main()
{
    /*
    create this pattern in while loop
    1
    2 4
    3 6 9
    4 8 12 16
    5 10 15 20 25
    */

    int i = 1;

    while (i <= 5)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i * j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}