#include <iostream>
using namespace std;

int main() {
    
    int x, y, z;
    
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    cout << "Enter the value of z: ";
    cin >> z;

    int result = (x + y + z) * (x + y + z);
    
    cout << "The result of (x + y + z)^2 is: " << result << endl;
}