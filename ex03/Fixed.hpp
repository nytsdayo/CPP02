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

    // 比較演算子
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    // 算術演算子
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;

    // インクリメント/デクリメント演算子
    Fixed& operator++();     // プリインクリメント
    Fixed operator++(int);   // ポストインクリメント
    Fixed& operator--();     // プリデクリメント
    Fixed operator--(int);   // ポストデクリメント

    // 静的メンバー関数
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif // FIXED_HPP
