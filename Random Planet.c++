#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string p[] = {
        "Mars","Earth","Venus","Jupiter"
    };

    cout << p[rand()%4];

    return 0;
}
