#include"RPN.hpp"

RPN::RPN()
{

}

RPN::~RPN()
{

}
RPN::RPN(const RPN &obj)
{
    *this = obj;
}

RPN &RPN::operator=(const RPN &obj)
{
    if (this != &obj)
        s = obj.s;
    return *this;
}

int RPN::add(int a, int b)
{
    return(a+b);
}

int RPN::sub(int a, int b)
{
    return(a-b);
}

int RPN::div(int a, int b)
{
    return(a/b);
}

int RPN::mult(int a, int b)
{
    return(a*b);
}
int convint(char c)
{
    int val = c - '0';
    return(val);
}

bool check_caracter(char c)
{
    if(!isdigit(c) && c != '+'&&c != '-'&&c != '*'&&c != '/' && c!=' ')
        return(false);
    else 
        return(true);
}
void RPN::fill_stack(const std::string val)
{
    size_t i = 0;
    std::string v;
    
try{
    if(val.size()<3)
        throw std::invalid_argument("Not Enough Numbers");
    while(i<val.size())
     {   
        if(!check_caracter(val[i]))
            throw std::invalid_argument("Error: Invalid Caracter");
        if(val[i] == ' ')
        {
            std::cout<<"----------\n";
            i++;
            continue;
        }
        if(val[i] != '+'&&val[i] != '-'&&val[i] != '*'&&val[i] != '/')
        {
            if(val[i+1]!=' ')
                throw std::invalid_argument("Error: The Next Caracter Should Be A Space.");
            s.push(convint(val[i]));
        }
        else
        {
            if(s.size() < 2)
                throw std::invalid_argument("Not Enough Numbers");
            if(val[i] == '+')
            {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(add(b,a));
            }
            else if(val[i] == '-')
            {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(sub(b,a));
            }
            else if(val[i] == '/')
            {
                int a = s.top();
                s.pop();
                int b = s.top();
                if(a == 0)
                    throw std::invalid_argument("Error: Division by 0");
                s.pop();
                s.push(div(b,a));
                
            }
            else if(val[i] == '*')
            {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(mult(b,a));
            }
        }
        i++;
    }
    //exit(0);
    if(s.size() == 1)
    {
        std::cout<<s.top()<<std::endl;
    }
    else
        throw std::invalid_argument("Error");
    std::cout<<"+++++\n";
    }
catch(std::exception &e)
    {
         std::cout<<e.what()<<std::endl;
    }
       
}
