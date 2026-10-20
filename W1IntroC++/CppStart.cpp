#include <iostream>

// namespace std is used to avoid writing std:: before cout and endl.
using namespace std;

int main(){

    //printing an output on the screen.
    cout << "Hello, World!" << endl ;
    // to avoid endl we can use "\n" instead of endl.
    cout << "Hello, World2!\n";
    cout << "My name is Faizan.";

    // getting an input from user and outputting it on the screen.
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    cout << "You entered: " << num;


    //try5.cpp
    //creting array of characters to store name of user.
    //this stops reading input after space.

    char name[20];
    cout << "Enter your name? ";
    cin >> name;
    cout << "Your name is " << name << "\n";

    //creating string variable to store name of user.

    string name2;
    cout << "Enter your name? ";
    getline(cin, name2);
    cout << "Your name is " << name2 << "\n";
    
    return 0;
}