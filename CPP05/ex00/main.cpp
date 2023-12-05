
#include"Bureaucrat.hpp"

int main( void )
{
    try 
    {
        Bureaucrat bureaucrat("bur", 5);
        std::cout << bureaucrat << std::endl;
        while(1)
        {
            std::cout<<"==>"<<std::endl;
            bureaucrat.incrementGrade();
        }
        // while(1)
        //     bureaucrat.decrementGrade();
    } 
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}