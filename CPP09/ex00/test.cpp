#include <iostream>
#include <map>

int main() {
    // Creating a map with string keys and int values
   std::string line="dddd|eeeeee";
   std::string v = line.substr(0,line.find("|"));
   std::string f = line.substr(line.find("|")+1);
   std::cout<<v<<std::endl;
   std::cout<<f<<std::endl;
   std::cout<<line<<std::endl;
    return 0;
}