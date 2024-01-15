
#include"PmergeMe.hpp"

int main(int c,char **v)
{
    if(c < 3)
    {
        std::cout<<"INVALID NUMBER OF ARGUMENTS"<<std::endl;
        return(0);
    }
    try
    {
    std::string arr[c-1];
    size_t i = 1;
    size_t j = 0;
    while(v[i])
    {
        arr[j] = v[i];
        i++;
        j++;
    }
    PmergeMe p;
    clock_t start = clock();
    p.fill_vector(arr,j);
    clock_t end = clock();
    double t = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;
    std::cout << "Time to process a range of " << c - 1 << " elements with std::victor : " << t << " us" << std::endl;
    start = clock();
    p.fill_deque(arr,j);
    end = clock();
    t = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;
    std::cout << "Time to process a range of " << c - 1 << " elements with std::victor : " << t << " us" << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout<<e.what()<<std::endl;
    }
}