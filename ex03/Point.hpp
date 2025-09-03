#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
private:
    Fixed const _x;
    Fixed const _y;

public:
    Point();                                    // デフォルトコンストラクタ
    Point(const float x, const float y);       // パラメータ付きコンストラクタ
    Point(const Point& other);                 // コピーコンストラクタ
    Point& operator=(const Point& other);      // コピー代入演算子
    ~Point();                                  // デストラクタ

    Fixed getX(void) const;
    Fixed getY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif // POINT_HPP
