#include <iostream>
#include <cstdlib>
#include <ctime>

std::string generateAlphaNumericCode(int length) {
    const std::string charset = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string code;
    code.reserve(length);
    srand(time(0)); // Seed the random number generator

    for (int i = 0; i < length; ++i) {
        code += charset[rand() % charset.length()];
    }

    return code;
}

int main() {
    int length = 10; // Length of the code
    std::string code = generateAlphaNumericCode(length);
    std::cout << "Generated Code: " << code << std::endl;
    return 0;
}
