#include <iostream>

template <typename T>
T add(T c1, T c2);

int main()
{
    std::cout << "Porgram: main() \n";
    

    // adding two integers
    int a(4), b(2);
    
    std::cout << "Addition: " << add(a, b) << "\n";
    std::cout << "Multiplication: " << mult(a, b) << "\n";

    std::cout << "This is just a simple message \n";
    return 0;
}


template <typename T>
T add(T c1, T c2)
{
    return c1 + c2;
}

template <typename T>
T mult(T c1, T c2)
{
    return c1 * c2;
}