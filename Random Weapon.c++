#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string weapons[] = {
        "Sword","Bow","Axe","Dagger"
    };

    cout << weapons[rand()%4];

    return 0;
}
