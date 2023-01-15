#include <iostream>
using namespace std;
int main()
{
    char input;
    int countD = 0;
    int countA = 0;
    int countO = 0;

    for (int counter = 0; counter < 10; counter++)
    {
        cout << "Enter a symbol: ";
        cin >> input;

        if(isdigit(input))
            countD++;

        else if(isalpha(input))
            countA++;

        else
            countO++;
    }
    
    cout << "The number of digits is " << countD << endl;
    cout << "The number of alphabets is " << countA << endl;
    cout << "The number of symbol is " << countO << endl;

    return 0;
}