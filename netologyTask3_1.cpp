#include <iostream>

int main()
{
    bool first_bool = { true };
    bool second_bool = { true };
    // Таблица истинности для оператора ||

    std::cout << std::boolalpha << "Operator: ||" << std::endl;
    std::cout << first_bool << " " << second_bool << " " << (first_bool || second_bool) << std::endl;

    first_bool = { false };

    std::cout << first_bool << " " << second_bool << " " << (first_bool || second_bool) << std::endl;

    first_bool = { true };
    second_bool = { false };

    std::cout << first_bool << " " << second_bool << " " << (first_bool || second_bool) << std::endl;

    first_bool = { false };

    std::cout << first_bool << " " << second_bool << " " << (first_bool || second_bool) << std::endl;

    std::cout << std::endl;


    //Таблица истинности для оператора &&

    first_bool = { true };
    second_bool = { true };

    std::cout << "Operator: &&" << std::endl;
    std::cout << first_bool << " " << second_bool << " " << (first_bool && second_bool) << std::endl;

    first_bool = { false };

    std::cout << first_bool << " " << second_bool << " " << (first_bool && second_bool) << std::endl;

    first_bool = { true };
    second_bool = { false };

    std::cout << first_bool << " " << second_bool << " " << (first_bool && second_bool) << std::endl;

    first_bool = { false };

    std::cout << first_bool << " " << second_bool << " " << (first_bool && second_bool) << std::endl;

}

