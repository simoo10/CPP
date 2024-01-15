#include"PmergeMe.hpp"
PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{    
}

PmergeMe::PmergeMe(const PmergeMe &obj)
{
    *this = obj;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &obj)
{
    if (this != &obj)
    {
        d = obj.d;
        v = obj.v;
        pdeq = obj.pdeq;
        pvec = obj.pvec;
    }
    return *this;
}

void check_numbers(std::string nbr)
{
    int i = 0;
    while(nbr[i])
    {
        if(isdigit(nbr[i]))
            i++;
        else
            throw std::invalid_argument("Invalid Argument.");
    }
}
void PmergeMe::recursion_sort(size_t i)
{
    size_t j = i;

    if(i == pvec.size()-1)
        return;
    while(j<pvec.size())
    {
        if(pvec[i].first>pvec[j].first)
            std::swap(pvec[i].first,pvec[j].first);
        if(pvec[i].first< pvec[i].second)
            std::swap(pvec[i].first,pvec[i].second);
        j++;
    }
    
    recursion_sort(++i);
}

void PmergeMe::recursion_sort_deq(size_t i)
{
    size_t j = i;

    if(i == pdeq.size()-1)
        return;
    while(j<pdeq.size())
    {
        if(pdeq[i].first>pdeq[j].first)
            std::swap(pdeq[i].first,pdeq[j].first);
        if(pdeq[i].first< pdeq[i].second)
            std::swap(pdeq[i].first,pdeq[i].second);
        j++;
    }
    
    recursion_sort_deq(++i);
}

void PmergeMe::print_vect(std::vector<int>v,std::string msg)
{
    std::cout<<msg;
    for(size_t i = 0;i < v.size();i++)
        std::cout<<v[i]<<" ";
    std::cout<<std::endl;
}

void PmergeMe::print_deq(std::deque<int>d,std::string msg)
{
    std::cout<<msg;
    for(size_t i = 0;i < d.size();i++)
        std::cout<<d[i]<<" ";
    std::cout<<std::endl;
}


void PmergeMe::fill_vector(std::string *arr,size_t j)
{
    size_t i = 0;
    int rest = 0;
    int paire = 0;
        while(i<j)
        {
            check_numbers(arr[i]);
            i++;
        }
        i = 0;
        while(i<j)
        {
            v.push_back(atoi(arr[i].c_str()));
            i++;
        }
        i = 0;
        print_vect(v,"Before:   ");
        if(v.size() % 2 != 0)
        {
            paire = 1;
            rest  = v[v.size()-1];
            v.pop_back();
        }
        int e = 0;
        while(i<v.size())
        {
            pvec.push_back(std::make_pair(v[i],v[i+1]));
            if(pvec[e].first < pvec[e].second)
                std::swap(pvec[e].first,pvec[e].second);
            i+=2;
            e++;
        }
        recursion_sort(0);
        i = 0;
        v.clear();
        i = 0;
        while(i<pvec.size())
        {
            v.push_back(pvec[i].first);
            i++;
        }
        std::vector<int>::iterator it;
        i = 0;
        while(i<pvec.size())
        {
            it = std::lower_bound(v.begin(),v.end(),pvec[i].second);
            v.insert(it,pvec[i].second);
            i++;
        }
        if(paire == 1)
        {
            it = std::lower_bound(v.begin(),v.end(),rest);
            v.insert(it,rest);
        }
        print_vect(v,"After:   ");
    //}
    // catch(std::exception &e)
    // {
    //     std::cout<<e.what()<<std::endl;
    // }
}

void PmergeMe::fill_deque(std::string *arr,size_t j)
{
    size_t i = 0;
    int rest = 0;
    int paire = 0;
   try
   {
        while(i<j)
        {
            check_numbers(arr[i]);
            i++;
        }
        i = 0;
        while(i<j)
        {
            d.push_back(atoi(arr[i].c_str()));
            i++;
        }
        i = 0;
        if(d.size() % 2 != 0)
        {
            paire = 1;
            rest  = d[d.size()-1];
            d.pop_back();
        }
        int e = 0;
        while(i<d.size())
        {
            pdeq.push_back(std::make_pair(d[i],d[i+1]));
            if(pdeq[e].first<pdeq[e].second)
                std::swap(pdeq[e].first,pdeq[e].second);
            i+=2;
            e++;
        }
        recursion_sort_deq(0);
        i = 0;
        d.clear();
        i = 0;
        while(i<pdeq.size())
        {
            d.push_back(pvec[i].first);
            i++;
        }
        std::deque<int>::iterator it;
        i = 0;
        while(i<pdeq.size())
        {
            it = std::lower_bound(d.begin(),d.end(),pdeq[i].second);
            d.insert(it,pdeq[i].second);
            i++;
        }
        if(paire == 1)
        {
            it = std::lower_bound(d.begin(),d.end(),rest);
            d.insert(it,rest);
        }
    }
    catch(std::exception &e)
    {
        std::cout<<e.what()<<std::endl;
    }
}
