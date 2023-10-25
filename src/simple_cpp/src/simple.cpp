#include <array>
#include <iostream>
#include <algorithm>

int main() {
    constexpr auto r = std::array{0, 10, 15};
    std::cout << "contains 10: " << static_cast<int>(std::ranges::find(r, 10) != std::cend(r)) << std::endl;
}
