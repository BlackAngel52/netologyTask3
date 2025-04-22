#include <iostream>

int main()
{
    int firstNum, secondNum, thirdNum{};

    std::cout << "Enter first number: ";
    std::cin >> firstNum;
    std::cout << std::endl;
    std::cout << "Enter second number: ";
    std::cin >> secondNum;
    std::cout << std::endl; 
    std::cout << "Enter third number: ";
    std::cin >> thirdNum;
    std::cout << std::endl;


    //firstNum >= secondNum ? 

    if (firstNum >= secondNum) 
    {
        if (firstNum >= thirdNum) 
        {
            if (secondNum >= thirdNum) 
            {
                std::cout << firstNum << " " << secondNum << " " << thirdNum << std::endl;
            }
            else 
            {
                std::cout << firstNum << " " << thirdNum << " " << secondNum << std::endl;
            }
        }
        else 
        {
            std::cout << thirdNum << " " << firstNum << " " << secondNum << std::endl;
        }
    }
    else
    {
        if (firstNum >= thirdNum) 
        {
            std::cout << secondNum << " " << firstNum << " " << thirdNum << std::endl;
        }
        else if (secondNum >= thirdNum) 
        {
            std::cout << secondNum << " " << thirdNum << " " << firstNum << std::endl;
        }
        else
        {
            std::cout << thirdNum << " " << secondNum << " " << firstNum << std::endl;
        }
    }


}

