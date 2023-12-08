
#include"Bureaucrat.hpp"

int main( void )
{
    try 
    {
        int count = 0;
        Bureaucrat bureaucrat("bur", 5);
        std::cout << bureaucrat << std::endl;
        while(1)
        {
            std::cout<<count<<std::endl;
            bureaucrat.incrementgrade();
            count++;
        }
        // while(1)
        //     bureaucrat.decrementGrade();
    } 
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}