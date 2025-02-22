#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include "mathfuncs.h"   // For add, subtract, multiply, divide
#include "randfuncs.h"  // For flipCoin, rollD6, rollD20

using namespace std;

int main(int argc, char *argv[]) {
    // Seed the random number generator
    srand(time(0));

    const string EXIT = "quit";
    string command;

    do {
        cout << "calc: ";
        cin >> command;

        if ("help" == command) {
            // Combined help documentation
            cout << "Available commands:" << endl;
            cout << "  add [a] [b]   : adds two integers" << endl;
            cout << "  sub [a] [b]   : subtracts two integers" << endl;
            cout << "  mul [a] [b]   : multiplies two integers" << endl;
            cout << "  div [a] [b]   : divides two integers" << endl;
            cout << "  coin          : Flip a coin (returns Heads or Tails)" << endl;
            cout << "  d6            : Roll a six-sided die (returns 1-6)" << endl;
            cout << "  d20           : Roll a twenty-sided die (returns 1-20)" << endl;
            cout << "  quit          : exit the program" << endl;
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
        else if ("coin" == command) {
            // Flip a coin
            cout << "Result: " << flipCoin() << endl;
        }
        else if ("d6" == command) {
            // Roll a six-sided die
            cout << "Result: " << rollD6() << endl;
        }
        else if ("d20" == command) {
            // Roll a twenty-sided die
            cout << "Result: " << rollD20() << endl;
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
