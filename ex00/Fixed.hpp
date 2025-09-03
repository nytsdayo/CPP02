#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int                 _value;
    static const int    _fractionalBits = 8;
public:
    Fixed();                                // デフォルトコンストラクタ
    Fixed(const Fixed& other);              // コピーコンストラクタ
    Fixed& operator=(const Fixed& other);   // コピー代入演算子
    ~Fixed();                               // デストラクタ

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif // FIXED_HPP
