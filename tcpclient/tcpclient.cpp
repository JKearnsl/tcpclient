#include <iostream>

#include "Client.h"

int main()
{
    setlocale(LC_ALL, "rus");

    const char* addresses = "127.0.0.1";
    const char* port = "27015";

    std::cout << std::endl << "Поиск файлов в директории по маске" << std::endl;
    std::cout << std::endl << "Пример использования:" << std::endl;
    std::cout << "Запрос: 'C:\\*.*'  - вернет список всех обьектов в директории 'C:\'" << std::endl;
    std::cout << "Запрос: 'C:\\*.txt'  - вернет список всех файлов типа 'txt' в директории 'C:\'" << std::endl;

    while (true)
    {
        std::string query;
        std::cout << std::endl << "Введите поисковой запрос: ";
        std::cin >> query;

        std::string result = request(Client(addresses, port), query);
        std::cout << std::endl << "Результат поиска:" << std::endl << result << std::endl;
    }

    

    return 0;
}