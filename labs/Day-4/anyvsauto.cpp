#include <iostream>
#include <any>
#include <variant>

int main() {
    std::any value = 42; // Stores an int
    value = 3.14;        // Can store a double
    value = "Hello";     // Can store a const char*

    try {
        std::cout << std::any_cast<const char*>(value) << std::endl; // Explicit cast
    } catch (const std::bad_any_cast& e) {
        std::cerr << "Bad any_cast: " << e.what() << std::endl;
    }
    //std::variant<int, double, std::string> value;

    // value = 42;           // Stores an int
    // value = 3.14;         // Stores a double
    // value = "Hello";      // Stores a string

    // std::cout << std::get<std::string>(value) << std::endl; // Access value as string

    return 0;
}
