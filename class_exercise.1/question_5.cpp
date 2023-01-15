#include <iostream>

using namespace std;

void calcPrice(float price, int quantity)
{
    float total = price * quantity;
    cout << "Total price: RM " << endl;
}

float calcDiscount(float price, int quantity)
{
    float total = price * quantity;
    float discount;

    cout << "Enter discount: ";
    cin >> discount;

    return total - (total * (discount / 100));

}

float calcTax (float price, int quantity)
 {
    float total = price * quantity;
    float tax;

    cout << "Enter tax: ";
    cin >> tax;

    return total + (total * (tax / 100));
 }   

 int main()
 {
    float price;
    int quantity;

    cout << "Enter the price of the item: RM ";
    cin >> price;
    cout << "Enter the quantity of the item: ";
    cin >> quantity;

    float totalPrice = calcPrice(price, quantity);
    float totalDiscount = calcDiscount(price, quantity);
    float totalTax = calcTax(price, quantity);

    cout << "Total price: RM " << totalPrice << endl;
    cout << "Total price after discount: RM " << totalDiscount << endl;
    cout << "Total price after tax: RM " << totalTax << endl;

 }

