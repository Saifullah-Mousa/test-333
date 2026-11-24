#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return 2*a;
}

int main() {
    cout << "Welcome to Team Calculator!" << endl;
    cout << "Result: " << add(5, 3) << endl;
    return 0;
}
