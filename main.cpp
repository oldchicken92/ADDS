#include <iostream>
#include <string>
#include "Autocomplete.h"

int main() {
    Autocomplete ac;
    ac.insert("bin");
    ac.insert("ball");
    ac.insert("ballet");

    std::vector<std::string> suggestions = ac.getSuggestions("b");

    for (const std::string& word : suggestions) {
        std::cout << word << std::endl;
    }

    return 0;
}
