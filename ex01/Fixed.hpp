#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int                 _value;
    static const int    _fractionalBits = 8;

public:
    Fixed();                                // デフォルトコンストラクタ
    Fixed(const int intValue);              // 整数コンストラクタ
    Fixed(const float floatValue);          // 浮動小数点コンストラクタ
    Fixed(const Fixed& other);              // コピーコンストラクタ
    Fixed& operator=(const Fixed& other);   // コピー代入演算子
    ~Fixed();                               // デストラクタ

    int getRawBits(void) const;
    void setRawBits(int const raw);
    
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif // FIXED_HPP
