#include <iostream>
#include <math.h>

using namespace std;

int findSquare(int num)
{
    return num * num;
}
int main()
{
    int below10 = 1;
    for (int i = 1; i <= 50; i++)
    {
        if(below10 > 10)
        {
            cout << endl;
            below10 = 1;
        }
        cout << findSquare(i) << " ";
        below10++;
    }
    return 0;
}
