#include <iostream>
#include <string>
using namespace std;
struct student {
    string name;
    int age;
    student *what;
};
void display1(student st) {
    cout << "Student Name " << st.name << endl;
    cout << "Student Age " << st.age << endl;
}
void display2(student *st) {
    cout << "Student Name " << st->name << endl;
    cout << "Student Age " << st->age << endl;
}
int main() {
    student st1, st2, *st3;
    st3 = new student;
    st1.name ="Mamat";
    st1.age = 22;
    st2.name ="Minah";
    st2.age = 33;
    st3->name ="Joyah";
    st3->age = 44;
    display1(st1);
    display1(st2);
    display2(st3);
    st1.what = &st2;
    st3->what = &st1;
    display2(st1.what);
    display2(st3->what);
    return 0;
}