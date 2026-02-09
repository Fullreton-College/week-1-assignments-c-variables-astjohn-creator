/* code yourself */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;
    int num4;

    cout<< "Enter a number: "<<endl;
    cin >> num1;
    cout<< "Enter another number: "<<endl;
    cin >> num2;
    cout<< "Enter yet another number: "<<endl;
    cin >> num3;
    cout << "Enter last number: "<<endl;
    cin >> num4;
    
    int intProduct;
    intProduct = num1 * num2 * num3 * num4;
    int intAverage;
    intAverage = (num1 + num2 + num3 + num4) / 4;

    double doubleNum1;
    doubleNum1 = static_cast<double>(num1);
    double doubleNum2;
    doubleNum2 = static_cast<double>(num2);
    double doubleNum3;
    doubleNum3 = static_cast<double>(num3);
    double doubleNum4;
    doubleNum4 = static_cast<double>(num4);

    double doubleProduct;
    doubleProduct = doubleNum1 * doubleNum2 * doubleNum3 * doubleNum4;
    double doubleAverage;
    doubleAverage = (doubleNum1 + doubleNum2 + doubleNum3 + doubleNum4) / 4.0;

    cout << fixed << setprecision(3);

    cout << intProduct << " " << intAverage << " " << doubleProduct << " " << doubleAverage << endl;

    return 0;



}