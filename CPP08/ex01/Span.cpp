#include"Span.hpp"

Span::Span()
{
    N = 0;
    count = 0;
}

Span::Span(unsigned int n)
{
    N = n;
    count = 0;
}

Span::Span(Span const &obj)
{
    N = obj.N;
}

Span &Span::operator=(Span const &obj)
{
    N = obj.N;
    return(*this);
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
    if(count == N)
        throw Span::FullStock();
    numbers.push_back(n);
    std::cout<<"the number "<<n<<" is added to your container"<<std::endl;
    count++;
}

const char *	Span::FullStock::what() const throw() {
	return ("THE CONTAINER IS FULL!");
}

const char *	Span::Enough_Numbers::what() const throw() {
	return ("THE SIZE OF YOUR CONTAINER IS TOO SHORT!");
}

int Span::shortestSpan()
{
    int minimum = INT_MAX;
    std::vector<int> tmp = numbers;
    if(count<=1)
        throw Span::Enough_Numbers();
    std::sort(tmp.begin(),tmp.end());
    for(size_t i=0;i<tmp.size()-1;i++)
        minimum = std::min(minimum, tmp[i+1]-tmp[i]);
    return(minimum);
}

int Span::longestSpan()
{
    int maximum = 0;
    std::vector<int> tmp = numbers;
    if(count<=1)
        throw Span::Enough_Numbers();
    std::sort(tmp.begin(),tmp.end());
    maximum = tmp[tmp.size()-1] - tmp[0];
    return(maximum);
}

void Span::generate_numbers()
{
    srand(time(NULL));
    std::vector<int>    vec(10000);
    std::generate(vec.begin(),vec.end(),std::rand);
    for(size_t i=0;i<vec.size();i++)
        addNumber(vec[i]);
}