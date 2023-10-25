#include <array>
#include <iostream>
#include <algorithm>

int main() {
    constexpr auto r = std::array{0, 10, 15};

    std::cout << "without ranges:\n";
    std::cout << "\tcontains 10: " << static_cast<int>(std::find(std::cbegin(r), std::cend(r), 10) != std::cend(r)) << std::endl;

#ifdef __cpp_lib_ranges
    std::cout << "with ranges:\n";
    std::cout << "\tcontains 10: " << static_cast<int>(std::ranges::find(r, 10) != std::cend(r)) << std::endl;
#endif
}
