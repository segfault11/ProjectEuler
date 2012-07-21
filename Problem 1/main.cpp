#include <iostream>

int main(int argc, const char *argv[])
{
    unsigned int sum = 0;

    for (unsigned int i = 0; i < 1000; i++)
    {                          
        if (i % 3 == 0 || i % 5 == 0) 
        {
            sum += i;
        }                                                         
    }

    std::cout << "Sum " << sum << std::endl;

    return 0;
}
