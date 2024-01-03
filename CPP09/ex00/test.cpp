#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap;
    myMap[1] = "One";
    myMap[3] = "Three";
    myMap[5] = "Five";
    myMap[7] = "Seven";

    int key_to_find = 4;

    auto it = myMap.lower_bound(key_to_find);
    if (it != myMap.end()) {
        std::cout << "First element not less than or equal to " << key_to_find << " is: " << it->first << std::endl;
    } else {
        std::cout << "No element found not less than or equal to " << key_to_find << std::endl;
    }

    return 0;
}