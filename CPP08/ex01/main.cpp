#include"Span.hpp"

int main()
{
   
    srand(time(NULL));
    std::vector<int>    vec(10000);
    std::generate(vec.begin(),vec.end(),std::rand);
     Span s(vec.size());
    try
    {
        for(size_t i=0;i<vec.size();i++)
            s.addNumber(vec[i]);
        std::cout<<"the shortest destance is: "<<s.shortestSpan()<<std::endl;
        std::cout<<"the longest destance is: "<<s.longestSpan()<<std::endl;
    }
    catch(std::exception &e)
    {
        std::cout<<e.what()<<std::endl;
    }
}