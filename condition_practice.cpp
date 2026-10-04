#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "እባክዎን ዕድሜዎን ያስገቡ: ";
    cin >> age;

    if (age >= 18) {
        cout << "እንኳን ደስ አለዎት! ለመምረጥ ብቁ ነዎት።" << endl;
    } else {
        cout << "ይቅርታ! ለመምረጥ ዕድሜዎ አልደረሰም።" << endl;
    }

    return 0;
}
