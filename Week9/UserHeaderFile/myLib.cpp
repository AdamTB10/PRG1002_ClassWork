#include "myLib.h"

using namespace std;

const float PI = 3.14159265358979323846f;

float degToRad(float deg) {
    return deg * (PI / 180.0f);
}

float radToDeg(float rad) {
    return rad * (180.0f / PI);
}