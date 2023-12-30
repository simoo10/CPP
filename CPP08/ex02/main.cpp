#include"MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout<<"----------------------TEST WITH VECTORS-----------------------"<<std::endl;
    std::vector<int>vec;
    vec.push_back(5);
    vec.push_back(17);
    std::cout << vec[vec.size()-1]<< std::endl;
    vec.pop_back();
    std::cout << vec.size() << std::endl;
    vec.push_back(3);
    vec.push_back(5);
    vec.push_back(737);
    //[...]
    vec.push_back(0);
    std::vector<int>::iterator it1 = vec.begin();
    std::vector<int>::iterator ite1 = vec.end();
    ++it1;
    --it1;
    while (it1 != ite1)
    {
        std::cout << *it1 << std::endl;
        ++it1;
    }
   // std::vector<int> s(vec);
    return 0;
}