#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Please enter your age: ";
    cin >> age;

    try {
        if (age < 18) {
            throw age;
        } else {
            cout << "\nYou can Vote\nYou are " << age << " years old." << endl;
        }
    }
    catch (int errorAge) {
        cout << "\nGrow up." << endl;
        cout << "You are: " << errorAge << endl;
    }

    return 0;
}
