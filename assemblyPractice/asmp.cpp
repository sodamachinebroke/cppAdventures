#include <iostream>

int addNumbers(int a, int b)
{
    asm(
        "add %[b], %[a]" // Add a and b
        : [a] "+r"(a)    // Output: a (modified in place)
        : [b] "r"(b)     // Input: b
    );
    return a;
}

int main()
{
    int a = 5;
    int b = 7;
    int result;

    std::cout << "The result of adding " << a << " and " << b << " is: ";
    result = addNumbers(a, b); // Store the result in 'result' variable

    std::cout << result << std::endl;
    std::cin.get();
    return 0;
}