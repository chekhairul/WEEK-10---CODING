#include <iostream>
#include <math.h>

using namespace std;

#define PI 3.142

float sphere_vol(float radius)
{
    float v = 4 / 3 * PI * pow(radius, 3);
    return v;
}

int main()
{
    float r;
    cout << "Enter the radius of the sphere: ";
    cin >> r;

    cout << "Volume = " << sphere_vol(r) << endl;

    return 0;
}