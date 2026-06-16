#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string food[] = {
        "Pizza","Burger","Kebab","Lavash"
    };

    cout << food[rand()%4];

    return 0;
}
