#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> daftarlagu = {"ini abadi", "monokrom"};
    daftarlagu.insert(daftarlagu.begin() + 1, "everything u are"); 
    daftarlagu.push_back("aitakatta"); 
    daftarlagu.erase(daftarlagu.begin()); 
    std::cout << "hasil akhir: [";
    for (size_t i = 0; i < daftarlagu.size(); ++i) {
        std::cout << "\"" << daftarlagu[i] << "\"";
        if (i < daftarlagu.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;

    return 0;
}
