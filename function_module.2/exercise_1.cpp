#include <iostream>
using namespace std;

int main()
{
    char name[30];
    char gender;
    int male_count = 0, female_count = 0;
    for (int counter = 0; counter < 5; counter++)
    {
        cout << "Name of the employee: ";
        cin >> ws;
        cin.getline(name, 30);
        cout << "Gender of the employee (M / F): ";
        cin >> gender;

        gender = toupper(gender);

        if ( gender == 'M'){
            male_count++;
        }
        else if ( gender == 'F')
            female_count++;
        else
            "invalid input";
    }

    cout << "The number of male employee is " << male_count << endl;
    cout << "The number of female employee is " << female_count << endl;
    
    return 0;
}