#include <iostream>
#include <string> //need to include string, cause c++ doesn't have String by default

// using namespace std;

void example()
{
    std::cout << "Hi\r\n"; // std:: is there because i left out line 2

    int myNum = 15;
    std::cout << myNum << " is my number\n"; // this is how you concat strings
}

void inputPractice()
{
    int x = 0;
    std::cout << "Current value for x: " << x << "\n"
              << "Give it a new value: ";

    std::cin >> x;

    std::cout << "x's new value: " << x << "\n";
}
 
int main()
{
    //float eg = 35e3; you can use "e" to display the power of the number.
    //std::cout << (5>3); this will compare 5 and 3 and will give 1 or 0 depending on if our statement is true
    
    return 0;
}