#include <iostream>
#include <vector>
#include <random>

class pSort
{
public:
    int randGen()
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distr(0, 100000);

        return distr(gen);
    }

    void fillArray(int[] &arr){
        for (int i = 0; i < arr.length; i++)
        {
            /* code */
        }
        
    }

    int main(){
        return 0;
    }
};