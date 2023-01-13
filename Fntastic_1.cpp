#include <iostream>
#include <string>
#include <map>
#include <cctype>

int main() {
    std::string input_str;
    std::map<char, int> symbol_num;
    if (getline(std::cin, input_str)) {
        for (int i = 0; i < input_str.size(); ++i) {
            if (input_str[i] >= 'A' && input_str[i] <= 'Z') {
                input_str[i] = tolower(input_str[i]);
            }
            ++symbol_num[input_str[i]];
        }

        for (int i = 0; i < input_str.size(); ++i) {
            if (symbol_num[input_str[i]] == 1) {
                std::cout << "(";
            } else {
                std::cout << ")";
            }
        }
    }
    return 0;
}