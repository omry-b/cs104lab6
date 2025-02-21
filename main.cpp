#include <iostream>
#include <cstdlib>
#include <ctime>
#include "randfuncs.h"

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
            cout << "Available commands:" << endl;
            cout << "  flip  - Flip a coin (returns Heads or Tails)" << endl;
            cout << "  d6    - Roll a six-sided die (returns 1-6)" << endl;
            cout << "  d20   - Roll a twenty-sided die (returns 1-20)" << endl;
            cout << "  quit  - Exit the program" << endl;
        }
        else if ("flip" == command) {
            cout << flipCoin() << endl;
        }
        else if ("d6" == command) {
            cout << rollD6() << endl;
        }
        else if ("d20" == command) {
            cout << rollD20() << endl;
        }
        else if (EXIT != command) {
            cout << "unknown command" << endl;
            return 1;
        }
    } while (EXIT != command);
    return 0;
}
