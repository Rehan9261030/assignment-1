#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    if (a == b && b == c)
        cout << "All numbers are equal";
    else {
        int largest, smallest;

        if (a > b && a > c)
            largest = a;
        else if (b > a && b > c)
            largest = b;
        else
            largest = c;

        if (a < b && a < c)
            smallest = a;
        else if (b < a && b < c)
            smallest = b;
        else
            smallest = c;

        cout << "Largest number: " << largest;
        cout<<"\n";
        cout << "Smallest number: " << smallest;
    }
    return 0;
}
