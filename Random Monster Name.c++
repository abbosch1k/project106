#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string m[] = {
        "Dragon","Zombie","Golem","Demon"
    };

    cout << m[rand()%4];

    return 0;
}
