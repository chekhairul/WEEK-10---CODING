#include <iostream>
using namespace std;

int find_max(int n, int m) //receive
{
    //function definition
    int max;
    if (n > m)
        max = n;
    else
        max = m;
    return max; //pass
    
}

int find_min(int x, int y)
{
    int min;
    if (x < y)
        min = x;
    else
        min = y;
    return min;
}

int find_total(int , int);

void find_average(int); //prototype

int main()
{
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    //function call statement

    cout << "\nThe largest number is " << find_max (num1, num2) << endl;
    cout << "\nThe smallest number is " << find_min(num1, num2) << endl;

    int total = find_total(num1, num2);
    cout << "\nThe total of the 2 numbers is " << total << endl;

   find_average(total); //call
    return 0;
}

int find_total(int n1, int n2)
{
    return (n1 + n2);
}

void find_average(int t) //process
{
    float average = t / 2.0;
    cout << "The average of the 2 numbers is " << average << endl;
}