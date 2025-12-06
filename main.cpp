#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    std::cout << "Hello from C++ Application!!" << std::endl;
    std::cout << "Version: 1.0.0" << std::endl;
    
    if (argc > 1) {
        std::cout << "Arguments provided: ";
        for (int i = 1; i < argc; i++) {
            std::cout << argv[i] << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}
