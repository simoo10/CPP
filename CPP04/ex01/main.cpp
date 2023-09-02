#include"Animals/Cat.hpp"
#include"Animals/Dog.hpp"
#include"Brain.hpp"

int main( void )
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;
    //check of the copie(superficielle or profonde)
    Dog check;
    {
        Dog tmp = check;
    }
    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }
}