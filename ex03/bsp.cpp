#include "Point.hpp"

// 三角形の面積を計算する関数（原点移動を使った簡単な方法）
// 頂点p1を原点(0,0)に移動してから計算
// 面積 = |x2 * y3 - x3 * y2| / 2
static Fixed calculateTriangleArea(Point const& p1, Point const& p2, Point const& p3) {
    // ステップ1: p1の座標を取得
    Fixed p1_x = p1.getX();
    Fixed p1_y = p1.getY();
    
    // ステップ2: p1を原点(0,0)に移動するため、全ての点からp1を引く
    // p1' = p1 - p1 = (0, 0)  ← 原点になる
    // p2' = p2 - p1
    // p3' = p3 - p1
    Fixed p2_new_x = p2.getX() - p1_x;
    Fixed p2_new_y = p2.getY() - p1_y;
    Fixed p3_new_x = p3.getX() - p1_x;
    Fixed p3_new_y = p3.getY() - p1_y;
    
    // ステップ3: 移動後の座標で面積計算
    // p1'は(0,0)なので、簡単な公式: |p2'.x * p3'.y - p3'.x * p2'.y| / 2
    Fixed area = p2_new_x * p3_new_y - p3_new_x * p2_new_y;
    
    // ステップ4: 絶対値を取る
    if (area < Fixed(0)) {
        area = area * Fixed(-1);
    }
    
    return area / Fixed(2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    // 元の三角形ABCの面積を計算
    Fixed areaABC = calculateTriangleArea(a, b, c);
    
    // 元の三角形が退化している（面積が0）場合はfalse
    if (areaABC == Fixed(0)) {
        return false;
    }
    
    // 点Pから各頂点への三角形の面積を計算
    Fixed areaPAB = calculateTriangleArea(point, a, b);
    Fixed areaPBC = calculateTriangleArea(point, b, c);
    Fixed areaPCA = calculateTriangleArea(point, c, a);
    
    // いずれかの面積が0の場合、点は境界上にある
    if (areaPAB == Fixed(0) || areaPBC == Fixed(0) || areaPCA == Fixed(0)) {
        return false;
    }
    
    // 面積の合計が元の三角形の面積と等しければ、点は内部にある
    Fixed totalArea = areaPAB + areaPBC + areaPCA;
    return (areaABC == totalArea);
}
