#include <iostream>
#include "myLib.h"

using namespace std;

int main() {
    float degrees = 180.0f;
    float radians = 3.14f;

    cout << degrees << " degrees in radian = " << degToRad(degrees) << endl;
    cout << radians << " radians in degrees = " << radToDeg(radians) << endl;

    return 0;
}