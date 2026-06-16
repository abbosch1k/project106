#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string spells[] = {
        "Fireball","Ice","Thunder","Heal"
    };

    cout << spells[rand()%4];

    return 0;
}
