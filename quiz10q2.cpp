#include <iostream>

namespace constants
{
    constexpr double pi { 3.14159 };
}


using rad = double; // radians
using deg = double; // degrees

rad convertToRadians(deg degrees)
{
    return degrees * constants::pi / 180;
}

int main()
{
    std::cout << "Enter a number of degrees: ";
    deg degrees{};
    std::cin >> degrees;

    rad radians { convertToRadians(degrees) };
    std::cout << degrees << " degrees is " << radians << " radians.\n";

    // this will compile since rad and deg are both type double.
    radians = degrees;

    return 0;
}