#include <iostream>
#include <map>
#include <unordered_map>

int main () {
    std::map <int,std::string> ordered;
    std::map <int,std::string> unordered;
    int t;
    std::string s;
    for (int e=0; e<10; e++) {
        std::cin >> t >> s;
        ordered.insert({t,s});
        unordered.insert({t,s});
    }
    std::cout << "Ordered : ";
    for (auto& e : ordered) {
        std::cout << e.first << " " << e.second << std::endl;
    }
    std::cout << std::endl << "Unordered : ";
    for (auto& e : unordered) {
        std::cout << e.first << " " << e.second << std::endl;
    }
    

}