#include"Span.hpp"


int main()
{
    try
    {
    Span sp = Span(8);
    sp.addNumber(9);
    sp.addNumber(7);
    sp.addNumber(19);
    sp.addNumber(99);
    sp.addNumber(14);
    sp.addNumber(1);
    sp.addNumber(120);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout<<e.what()<<std::endl;
    }
return 0;
}

// int main()
// {
//     try
//     {
//         Span s(10000);
//         s.generate_numbers();
//         std::cout<<"the shortest destance is: "<<s.shortestSpan()<<std::endl;
//         std::cout<<"the longest destance is: "<<s.longestSpan()<<std::endl;
//     }
//     catch(std::exception &e)
//     {
//         std::cout<<e.what()<<std::endl;
//     }
// }