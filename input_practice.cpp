#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;

    // የተጠቃሚውን ስም መቀበል
    cout << "ስምህን አስገባ: ";
    cin >> name;

    // የተጠቃሚውን ዕድሜ መቀበል
    cout << "ዕድሜህን አስገባ: ";
    cin >> age;

    // የተቀበልነውን መረጃ ማሳየት
    cout << "\nሰላም " << name << "! ዕድሜህ " << age << " እንደሆነ መዝግበናል።" << endl;

    return 0;
}
