#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string c[] = {
        "Uzbekistan","Japan","Canada","Italy"
    };

    cout << c[rand()%4];

    return 0;
}
