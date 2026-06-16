#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string names[] = {"Shadow","Ghost","Blaze","Nova"};

    cout << names[rand()%4]
         << rand()%1000;

    return 0;
}
