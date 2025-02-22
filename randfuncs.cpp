#include "randfuncs.h"
#include <cstdlib>
#include <string>

std::string flipCoin() {
    return (rand() % 2 == 0) ? "Heads" : "Tails";
}

int rollD6() {
    return (rand() % 6) + 1;
}

int rollD20() {
    return (rand() % 20) + 1;
}
