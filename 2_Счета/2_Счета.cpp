// 2_Счета.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

    
    struct bank_account//структура
    {
        std::string account_holder_name;
        double money_amount;///
        double money_add;////
        int account_number;
    };

    double function_total(bank_account* person, double* money_amount, double* money_add)
    {
        //Функция должна принимать экземпляр структуры банковского счёта и новую сумму.
        double sum;
        sum = person->money_amount + person->money_add;

        return sum;
    }


    int main()
    {
        setlocale(LC_ALL, "RU");
        //пишем название структуры и название переменной
      // {"Василий", "Чапаев", 20};получение полей или атрибутов
        bank_account person;//завели переменную.экземпляр

        std::cout << "Введите номер счёта:" << std::endl;
        int info2;
        std::cin >> info2;
        person.account_number = info2;


        std::cout << "Введите имя владельца:" << std::endl;
        std::string info;
        std::cin >> info;
        person.account_holder_name = info;

        std::cout << "Введите баланс:" << std::endl;
        double info1;
        std::cin >> info1;
        person.money_amount = info1;/////////////

        /////////////////////////////////////////////////////////////////////////
        std::cout << "Введите новый баланс:" << std::endl;
        double info3;
        std::cin >> info3;
        person.money_add = info3;///////////
        ///////////////////////////////////////////////////////////////////
        std::cout << "Ваш счёт:" << std::endl;




        std::cout << person.account_holder_name << ", " << person.account_number << ", " << function_total(&person, &info1, &info3) << std::endl;

        return 0;
    }

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
