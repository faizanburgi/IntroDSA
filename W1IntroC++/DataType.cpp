#include <iostream>
using namespace std;
int main() {
    char stuName[20] = "Mat b Mamat";
    char stuGrade;
    short stuAge;
    //unsigned int increases the range of positive numbers that can be stored in the variable.
    //it can store values from 0 to 4,294,967,295 (2^32 - 1) on a typical system.
    unsigned int totStudent;
    float stuWeight;
    double feePaid;
    bool stuStatus;
    stuGrade = 'A';
    stuAge = 21;
    totStudent = 1200;
    stuWeight = 55.6;
    feePaid = 5461.75;
    stuStatus = false;
    cout << "Name : " << stuName << "\n";
    cout << "Grade : " << stuGrade << "\n";
    cout << "Age : " << stuAge << "\n";
    cout << "Total Student: " << totStudent << "\n";
    cout << "Weight (kg) : " << stuWeight << "\n";
    cout << "Fee Paid : RM" << feePaid << "\n";
    cout << "FullTime : " << stuStatus << "\n";
    cout << "\n";
    return 0;
}