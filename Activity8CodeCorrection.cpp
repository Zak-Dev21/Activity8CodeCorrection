#include <iostream>
using namespace std;

int main() {

    double x = 10;
    int y = 3;

    // Use static_cast to convert y to double before performing the division
    double z = x / static_cast<double>(y);

    cout << z;  // This will print the result of the division as a double

    return 0;
}
