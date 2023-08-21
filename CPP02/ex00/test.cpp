#include <iostream>

#include <iostream>

class Point {
public:
    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}

    // Surcharge de l'opérateur d'affectation
    // Point& operator=(const Point& autre) {
    //     if (this != &autre) {
    //         x = autre.x;
    //         y = autre.y;
    //     }
    //     return *this;
    // }
//  Point(const Point& autre) : x(autre.x), y(autre.y) {
//         std::cout << "Appel du constructeur de recopie" << std::endl;
//     }
    void afficher() {
        std::cout << "Coordonnées : (" << x << ", " << y << ")" << std::endl;
    }

private:
    int x, y;
};

int main() {
    // Point point1(3, 4);
    // Point point2(7, 9);

    // std::cout << "Point 1 avant affectation : ";
    // point1.afficher();

    // std::cout << "Point 2 avant affectation : ";
    // point2.afficher();

    // point2 = point1;  // Appel de la surcharge de l'opérateur d'affectation

    // std::cout << "Point 2 après affectation : ";
    // point2.afficher();
    int t = 5;
    std::cout<<"1--->>"<<t<<std::endl;
    float r = t;
    std::cout<<"2--->>"<<r<<std::endl;
    return 0;
}