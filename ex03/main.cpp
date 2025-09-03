#include <iostream>
#include "Point.hpp"

int main(void) {
    // 三角形の頂点を定義
    Point a(0.0f, 0.0f);
    Point b(10.0f, 0.0f);
    Point c(5.0f, 10.0f);
    
    // テスト点
    Point inside(5.0f, 3.0f);     // 内部の点
    Point outside(15.0f, 3.0f);   // 外部の点
    Point onVertex(0.0f, 0.0f);   // 頂点上の点
    Point onEdge(2.5f, 5.0f);     // 辺上の点
    
    std::cout << "Triangle vertices:" << std::endl;
    std::cout << "A(" << a.getX() << ", " << a.getY() << ")" << std::endl;
    std::cout << "B(" << b.getX() << ", " << b.getY() << ")" << std::endl;
    std::cout << "C(" << c.getX() << ", " << c.getY() << ")" << std::endl;
    std::cout << std::endl;
    
    std::cout << "Test results:" << std::endl;
    std::cout << "Point (" << inside.getX() << ", " << inside.getY() << ") is ";
    std::cout << (bsp(a, b, c, inside) ? "inside" : "outside") << " the triangle" << std::endl;
    
    std::cout << "Point (" << outside.getX() << ", " << outside.getY() << ") is ";
    std::cout << (bsp(a, b, c, outside) ? "inside" : "outside") << " the triangle" << std::endl;
    
    std::cout << "Point (" << onVertex.getX() << ", " << onVertex.getY() << ") is ";
    std::cout << (bsp(a, b, c, onVertex) ? "inside" : "outside") << " the triangle" << std::endl;
    
    std::cout << "Point (" << onEdge.getX() << ", " << onEdge.getY() << ") is ";
    std::cout << (bsp(a, b, c, onEdge) ? "inside" : "outside") << " the triangle" << std::endl;
    
    return 0;
}
