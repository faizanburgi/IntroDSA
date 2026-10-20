#include <iostream>
using namespace std;

int main() {
    //Addition
    int num1, num2, tot;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    tot = num1 + num2;

    cout << num1 << "+" << num2 <<"="<< tot <<"\n";

    //multiplication
    int Num1, Num2, Num3, sol;

    cout << "Enter the first number: ";
    cin >> Num1;
    cout << "Enter the second number: ";
    cin >> Num2;
    cout << "Enter the third number: ";
    cin >> Num3;

    sol = Num1 * Num2 * Num3;

    cout << Num1 << "x" << Num2 << "x" << Num3 <<"="<< sol <<"\n";
    return 0;
}