#include <iostream>

#include "Client.h"

int main()
{
    setlocale(LC_ALL, "rus");

    const char* addresses = "127.0.0.1";
    const char* port = "27015";

    std::cout << std::endl << "����� ������ � ���������� �� �����" << std::endl;
    std::cout << std::endl << "������ �������������:" << std::endl;
    std::cout << "������: 'C:\\*.*'  - ������ ������ ���� �������� � ���������� 'C:\'" << std::endl;
    std::cout << "������: 'C:\\*.txt'  - ������ ������ ���� ������ ���� 'txt' � ���������� 'C:\'" << std::endl;

    while (true)
    {
        std::string query;
        std::cout << std::endl << "������� ��������� ������: ";
        std::cin >> query;

        std::string result = request(Client(addresses, port), query);
        std::cout << std::endl << "��������� ������:" << std::endl << result << std::endl;
    }

    

    return 0;
}