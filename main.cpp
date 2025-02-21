#include <iostream>
#include <cstdlib>
#include <string>
#include "mathfuncs.h"  // Include your header

using namespace std;

int main(int argc, char *argv[]) {
    const string EXIT = "quit";
    string command;

    do {
        cout << "calc: ";
        cin >> command;

        if ("help" == command) {
            // Update help documentation
            cout << "help documentation" << endl;
            cout << "Available commands:" << endl;
            cout << "  add [a] [b]  : adds two integers" << endl;
            cout << "  sub [a] [b]  : subtracts two integers" << endl;
            cout << "  mul [a] [b]  : multiplies two integers" << endl;
            cout << "  div [a] [b]  : divides two integers" << endl;
            cout << "  quit         : exit the program" << endl;
        }
        else if ("add" == command) {
            int a, b;
            cin >> a >> b;
            cout << "Result: " << add(a, b) << endl;
        }
        else if ("sub" == command) {
            int a, b;
            cin >> a >> b;
            cout << "Result: " << subtract(a, b) << endl;
        }
        else if ("mul" == command) {
            int a, b;
            cin >> a >> b;
            cout << "Result: " << multiply(a, b) << endl;
        }
        else if ("div" == command) {
            int a, b;
            cin >> a >> b;
            if (b == 0) {
                cout << "Error: division by zero!" << endl;
            } else {
                cout << "Result: " << divide(a, b) << endl;
            }
        }
        else if (EXIT == command) {
            cout << "Exiting..." << endl;
        }
        else {
            cout << "unknown command" << endl;
        }
    } while (EXIT != command);

    return 0;
}
