#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string pets[] = {
        "Max","Leo","Rocky","Milo"
    };

    cout << pets[rand()%4];

    return 0;
}
