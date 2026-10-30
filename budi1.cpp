#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> orang = {"budi", "siti"};
    orang.insert(orang.begin(), "roni");
    orang.erase(orang.begin());
    std::cout << "hasil akhir: ";
    for (const auto& nama : orang) {
        std::cout << nama << " ";
    }
   
  std::cout << std::endl;
    
    return 0;
}
