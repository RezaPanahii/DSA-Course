#pragma once

#include <iostream>

struct Vector
{
    double x, y, z;

    Vector() {
        x = 0;
        y = 0;
        z = 0;
    }
    Vector(double x, double y, double z) :
        x(x), y(y), z(z) {}

    Vector& operator+(Vector& vec) {
        vec.x += this->x;
        vec.y += this->y;
        vec.z += this->z;

        return vec;
    }

    Vector& operator+=(Vector& vec) {
        this->x += vec.x;
        this->y += vec.y;
        this->z += vec.z;

        return vec;
    }
};
std::ostream& operator<<(std::ostream& out, Vector& vec) {
    out << "x: " << vec.x << " "
        << "y: " << vec.y << " "
        << "z: " << vec.z << std::endl;
    return out;
}
