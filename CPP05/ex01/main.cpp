#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{

    try {
        Bureaucrat bureaucrat("monster",15);
        Form form("monsters_legend", 15);
        std::cout << form << std::endl;
        bureaucrat.signForm(form);
        while(1)
            bureaucrat.incrementgrade();
        std::cout<<"--------"<<std::endl;
        
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}