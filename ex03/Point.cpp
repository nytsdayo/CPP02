#include "Point.hpp"

Point::Point() : _x(0), _y(0) {
}

Point::Point(const float x, const float y) : _x(x), _y(y) {
}

Point::Point(const Point& other) : _x(other._x), _y(other._y) {
}

Point& Point::operator=(const Point& other) {
    // constメンバーのため、実際には代入はできない
    // しかし、Orthodox Canonical Formのためにこの関数を定義する
    (void)other; // 未使用パラメータ警告を回避
    return *this;
}

Point::~Point() {
}

Fixed Point::getX(void) const {
    return _x;
}

Fixed Point::getY(void) const {
    return _y;
}
