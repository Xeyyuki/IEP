// Lee Yong Yan
// P2442305


#include <iostream>
#include <cmath>

using namespace std;

int Age;
double weight, F;

int main()
{
    cout << "This program is done by...";
    cout << "\nName: Lee Yong Yan";
    cout << "\nAdm No.: P2442305" << endl;

    cout << "\nEnter your age: ";
    cin >> Age;

    if (Age >= 21)
    {
        cout << "Enter your weight: ";
        cin >> weight;
        F = (-Age / 40.0) + sqrt(pow(1.0 + pow(weight, 2), 3) / (3.0 * Age));
        cout << "The computed result is " << F;
    }

    else
    {
        cout << "Your age must be 21 or older.";
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
