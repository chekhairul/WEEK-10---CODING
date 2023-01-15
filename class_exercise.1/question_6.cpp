#include <iostream>
#include <string>

using namespace std;

float calcTest(float partA, float partB)
{
    return ((partA + partB) * 0.15);
}

void result (float totalTest)
{
    if (totalTest >= 50)
    {
        cout << "\nYou have passed" << endl;
    }
    else
    {
        cout << "\nYou failed" << endl;
    }
}

int main()
{
    float partA, partB, totalTest;
    cout << "Enter the marks for part A: ";
    cin >> partA;

    cout << "Enter the marks for part B: ";
    cin >> partB;

    totalTest = calcTest(partA, partB);

    cout << "\nYour total test marks are: " << totalTest << endl;

    result(totalTest);

    return 0;
}