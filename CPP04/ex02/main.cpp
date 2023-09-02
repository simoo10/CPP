#include"Dog.hpp"
#include"Cat.hpp"

int main( void )
{
    // const AAnimal d;
    
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;

    Dog an;
    {
        Dog an1 = an;
    }
    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

    return 0;
}
