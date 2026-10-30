#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> tas = {"pedang kayu", "perisai besi"};
    tas.insert(tas.begin() + 0, "potion darah"); 
    tas.insert(tas.begin() + 2, "busur panah"); 
    tas.pop_back(); 

    std::cout << "hasil akhir: [";
    for (size_t i = 0; i < tas.size(); ++i) {
        std::cout << "\"" << tas[i] << "\"";
        if (i < tas.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;

    return 0;
}
