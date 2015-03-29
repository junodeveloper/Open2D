//
//  Vector2D.cpp
//  Juno2D
//
//  Created by 황준호 on 2015. 3. 10..
//  Copyright (c) 2015년 황준호. All rights reserved.
//

#include "Vector2D.h"

Vector2D::Vector2D() {
    x = 0, y = 0;
}
Vector2D::Vector2D(double x, double y) {
    this->x = x, this->y = y;
}
Vector2D::~Vector2D() {
    
}

Vector2D Vector2D::unitVector() {
    double s = size();
    return Vector2D(x / s, y / s);
}

double Vector2D::size() {
    return sqrt(this->x * this->x + this->y * this->y);
}

Vector2D Vector2D::operator+(const Vector2D dst) {
    return Vector2D(this->x + dst.x, this->y + dst.y);
}
Vector2D Vector2D::operator*(const double n) {
    return Vector2D(this->x * n, this->y * n);
}
Vector2D Vector2D::operator/(const double n) {
    return Vector2D(this->x / n, this->y / n);
}
Vector2D Vector2D::operator-(Vector2D dst) {
    return Vector2D(this->x - dst.x, this->y - dst.y);
}
Vector2D Vector2D::operator-() {
    Vector2D ret;
    ret.x = this->x * -1;
    ret.y = this->y * -1;
    return Vector2D(this->x * -1, this->y * -1);
}

double Dot(const Vector2D& a, const Vector2D& b) {
    return a.x * b.x + a.y * b.y;
}
double Cross(const Vector2D& a, const Vector2D& b) {
    return a.x * b.y - a.y * b.x;
}