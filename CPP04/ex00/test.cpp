#include <iostream>

class Base {
public:
     virtual void display() {
        std::cout << "Base class" << std::endl;
    }
};

class Derived : public Base {
public:
    void display() {
        std::cout << "Derived class" << std::endl;
    }
};

int main() {
    Base* derivedInstance = new Derived(); // Création d'une instance de Derived

    // Utilisation du pointeur polymorphique pour appeler la fonction display appropriée
    derivedInstance->display();

    delete derivedInstance; // Libération de la mémoire allouée dynamiquement

    return 0;
}