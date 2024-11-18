#include <iostream>
#include "../include/main.h"

using namespace std;

int main() {
    cout << "Content of t.txt: " << endl;
    PrintTXT("t.txt");
    cout << "String contained " << Count("t.txt") << " groups of equal elements" << endl;
    return 0;
}