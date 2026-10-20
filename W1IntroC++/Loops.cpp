#include <iostream>
using namespace std;
int main() {

    //for loop 
    int num;
    cout << "Enter a number 1 ? " ;
    cin >> num;
    if (num >= 0) {
    for (int x = 0; x <= num; x++)
    cout << x << " ";
    }
    else
    cout << "Please provide a positive number!";
    cout << "\n";

    //while loop
    int num2, y;
    cout << "Enter a number 2 ?" ;
    cin >> num2;
    y = 0;
    if (num2 >= 0) {
    while (y <= num2) {
    cout << y << " ";
    y++;
    }
    }
    else
    cout << "Please provide a positive number!";
    cout << "\n";

    //do while loop
    int num3, z;
    cout << "Enter a number 3 ? " ;
    cin >> num3;
    z = 0;
    if (num3 >= 0) {
    do {
    cout << z << " ";
    z++;
    } while (z <= num3);
    }
    else
    cout << "Please provide a positive number!";
    cout << "\n";

    //switch case
    int a;
    cout << "Enter a number? ";
    cin >> a;
    switch (a) {
    case 0 :
    cout << "ZERO!";
    break;
    case 1 :
    cout << "ONE";
    break;
    case 2 :
    cout << "TWO";
    break;
    default :
    cout << "UNKNOWN!";
    }
    cout << "\n";
    return 0;
}