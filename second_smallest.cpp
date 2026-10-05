#include <iostream>
using namespace std;

int main()
{
    int x[7] = {18, 5, 12, 3, 25, 8, 10};

    int first_sm = x[0];
    int sec_sm = x[1];

    if(sec_sm < first_sm)
    {
        int temp = first_sm;
        first_sm = sec_sm;
        sec_sm = temp;
    }

    for(int i = 2; i < 7; i++)
    {
        if(x[i] < first_sm)
        {
            sec_sm = first_sm;
            first_sm = x[i];
        }
        else if(x[i] < sec_sm)
        {
            sec_sm = x[i];
        }
    }

    cout << "The second smallest number is " << sec_sm << endl;

    return 0;
}
