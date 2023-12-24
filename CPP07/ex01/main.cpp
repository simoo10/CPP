#include"iter.hpp"

int main()
{
    std::cout<<"--------ARRAY OF STRINGS--------"<<std::endl;
    std::string t1[] = {"FC BARCELONA","REAL MADRID","MAN CITY","NAPOLI"};
    iter(t1,4,affiche_data< std::string>);
    std::cout<<"--------ARRAY OF INTEGERS--------"<<std::endl;
    int t2[]={45,29,90,105,190};
    iter(t2,5,affiche_data<const int>);
    std::cout<<"--------ARRAY OF FLOAT--------"<<std::endl;
    float t3[]={2.5,3.8,55.25};
    iter(t3,3,affiche_data<const float>);
}

 
// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }

// template< typename T >
// void print( T& x )
// {
//   std::cout << x << std::endl;
//   return;
// }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];

//   iter( tab, 5, print<const int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }
