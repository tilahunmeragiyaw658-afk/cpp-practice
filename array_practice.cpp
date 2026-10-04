#include <iostream>
using namespace std;

int main() {
    // 5 የ C++ ውጤቶችን የያዘ Array
    int scores[5] = {85, 90, 78, 92, 88};

    cout << "=== የ ተማሪዎች ውጤት ዝርዝር ===" << endl;

    // በ Array ውስጥ ያሉትን እቃዎች በ loop ማውጣት
    for (int i = 0; i < 5; i++) {
        cout << "ተማሪ " << (i + 1) << ": " << scores[i] << endl;
    }

    return 0;
}

