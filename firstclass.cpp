#include <iostream>
#include <cmath>

class Rectangle {
private:
    double length;
    double width;
public:
    void setLength(double l) {
        length = l;
    }

    void setWidth(double w) {
        width = w;
    }

    double Square() {
        return length * width;
    }

    double Perimeter() {
        return 2 * (length + width);
    }

    double Diagonal() {
        return sqrt(length * length + width * width);
    }
};

int main() {
    Rectangle rect;
    double l, w;
    
    std::cout << "Введите длину прямоугольника: ";
    std::cin >> l;
    rect.setLength(l);
    
    std::cout << "Введите ширину прямоугольника: ";
    std::cin >> w;
    rect.setWidth(w);
    
    std::cout << "Площадь прямоугольника: " << rect.Square() << std::endl;
    std::cout << "Периметр прямоугольника: " << rect.Perimeter() << std::endl;
    std::cout << "Диагональ прямоугольника: " << rect.Diagonal() << std::endl;

    return 0;
}