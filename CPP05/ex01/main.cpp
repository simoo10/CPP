#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{

    try {
        Bureaucrat bureaucrat("monster",16);
        Form form("monsters_legend", 15);
        std::cout << form << std::endl;
        bureaucrat.signForm(form);
        
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}